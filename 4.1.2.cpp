#include<iostream>
using namespace std;
//매개변수로 사용되는 복사 생성자

class ctestdata{
    public:
        ctestdata (int nparam) : m_ndata(nparam){
            cout<< "ctestdata(int)" <<endl;
        }

        ctestdata(const ctestdata &rhs) : m_ndata(rhs.m_ndata){
            cout<< "cstestdata(const ctestdata &)" <<endl;
        }

        //읽기 전용인 상수형 메서드
        int getdata() const{return m_ndata;}

        //멤버 변수에 쓰기를 시도하는 메서드
        void setdata(int nparam){m_ndata = nparam;}

    private:
        int m_ndata = 0;
};
//void testfunc(ctestdata param) <- 처음 연습한 방식 이 방식은 생성자를 두 번 호출하여 너무 비효율적인 방법이다.
void testfunc(ctestdata &param){ //*** & 를 붙여줌으로서 해결 ***
    cout << "testfunc(2)"<<endl;

    //피호출자 함수에서 매개변수 인스턴스의 값을 변경한다.
    param.setdata(20);
}

int main(){
    cout<< "testfunc(1)"<<endl;
    ctestdata a(10);
    testfunc(a);

    //함수 호출 후 a의 값을 출력한다.
    cout<<"a: "<<a.getdata()<<endl;
    cout<< "*****end*****" <<endl;

    return 0;
}