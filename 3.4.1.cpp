#include<iostream>
using namespace std;
//const 예약어로 선언한 상수형 매서드

class ctest{
    public:
        ctest(int nparam) : m_ndata(nparam){};
        ~ctest(){}

        //상수형 매서드로 선언 및 정의
        int getdata() const{
            return m_ndata; //멤버 변수의 값을 읽을 수는 있지만 쓸 수는 없다.
        }

        int setdata(int nparam){ m_ndata = nparam;}

    private:
        int m_ndata = 0;
};

int main(){
    ctest a(10);
    cout << a.getdata()<<endl;

    return 0;
}