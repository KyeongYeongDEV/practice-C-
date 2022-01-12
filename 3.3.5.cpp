#include<iostream>
using namespace std;

//생정자 다중 정의
class cmydata{
        public:
        //디폴트 생성자는 없다

        //매개변수가 int하나인 생성자 함수 선언 및 정의
        cmydata(int npram):m_ndata(npram){};
        //매개변수가 int 자료형 두 개인 생성자 함수 다중 정의
        cmydata(int x, int y) : m_ndata(x+y){};

        int getdata(){return m_ndata;}

        private:
        int m_ndata;
    };
    
int main(){
    cmydata a(10);
    cmydata b(3,4);

    cout<<a.getdata()<<endl;
    cout<<b.getdata()<<endl;
    
}