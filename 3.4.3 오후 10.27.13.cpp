#include<iostream>
using namespace std;
//멤버 함수 다중 정의1

class cmydata{
    public:
    cmydata() : m_ndata(0){};

    int getdata(void){return m_ndata;}
    void setdata(int nparam){m_ndata = nparam;};

    //매개변수가 double 자료형인 경우로 다중 정의했다
    void setdata(double dparam){m_ndata = 0;}

    private: 
    int m_ndata;
};

int main(){
    cmydata a;

    //cmydat::setdata(int)메서드가 호츨된다.
    a.setdata(10);
    cout << a.getdata()<<endl;

    cmydata b;

    //cmydata::setdata(double) 메서드가 호출된다.
    b.setdata(5.5);
    cout << b.getdata()<<endl;

    return 0;
}
