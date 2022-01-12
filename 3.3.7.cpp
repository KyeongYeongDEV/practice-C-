#include<iostream>
using namespace std;

class cmydata{
    public:
        cmydata(int nparam):m_ndata(nparam){};
        void printdata(){
            cout<<m_ndata<<endl; //m_ndata 값 출력

            //cmydata 클래스의 멤버인 m_ndata의 값을 출력한다.
            cout<< cmydata::m_ndata <<endl;

            cout<< this->m_ndata<<endl; //매서드를 호출한 인스턴스의 m_ndata 멤버 값을 출력한다.

            //매서드를 호출한 인스턴스의 m_ndata 클래스 멤버 m_ndata를 출력한다.
            cout<< this -> cmydata::m_ndata <<endl; 
        }
    
    private:
        int m_ndata;
};

int main(){
    cmydata a(5), b(10);
    a.printdata(); //()안에 &a가 보이지는 않지만 실제로는 전달된다. b도 마찬가지
    b.printdata();

    return 0;
}