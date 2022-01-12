#include<iostream>
using namespace std;

//delete 예약어를 사용해 컴파일 오류 발생
class cmydata{
    public:
        cmydata():m_ndata(0){};

        int getdata(void){return m_ndata;}
        void setdata(int nparam){m_ndata = nparam;}

        //실수로 double 자료형을 실인수가 넘어오는 경우를 차단한다.
        void setdata(double dparam) = delete;

    private:
        int m_ndata;
};

int main(){
    cmydata a;

    //cmtdata::setdata(int) 메서드가 호충된다.
    a.setdata(10);
    cout<<a.getdata()<<endl;

    cmydata b;

    //cmydata::setsata(double) 메서드가 호출된다.
    b.setdata(5.5);
    cout<<b.getdata()<<endl;

    return 0;
}
/*
29번 행에 double형이 입력됐으므로 
13번 행이 실행돼 delete를 통해 오류를 일으킨다.
*/