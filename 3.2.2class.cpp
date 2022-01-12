#include<iostream>
using namespace std;
//멤버 변수 초기화를 위한 생성자 함수 사용
class ctest{
public:
    ctest(){
        m_ndata =10;
    }

    int m_ndata;// 멤버데이터 선언

   void printdata(void);//멤버 함수 선언, 정의는 분리되었다.
};

 void ctest::printdata(void){//외부에 분리된 멤버 함수의 정의
        cout<< m_ndata<<endl;
        //멤버 데이터에 접근하고 값을 출력한다.
}

int main(){
    ctest t;
    t.printdata();
    
    return 0;
}