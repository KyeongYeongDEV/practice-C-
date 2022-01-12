#include<iostream>
using namespace std;
//복사 생성자 선언 및 정의

class cmydata{
    public:
        cmydata(){cout << "cmydata()"<<endl;}

        //복사 생성자 선언 및 정의
        cmydata(const cmydata &rhs){
            // :m_ndata(rhs.m_ndata) <- 생성자 초기화
            this ->m_ndata = rhs.m_ndata;
            cout << "cmydata(const cmydata &)"<<endl;
        }

        int getdata(void)const {return m_ndata;}
        void setdata(int nparam){m_ndata = nparam;}

    private:
        int m_ndata =0;
};

int main(){
    //디폴트 생성자가 호출되는 경우
    cmydata a;
    a.setdata(10);

    //복사 생성자가 호출되는 경우
    cmydata b(a);
    cout<< b.getdata()<<endl;

    return 0;
}