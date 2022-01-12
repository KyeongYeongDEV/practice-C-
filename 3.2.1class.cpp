#include<iostream>
using namespace std;
//클래스를 이용해 객체지향 프로그램으로 변경
class ctest{
public:
    ctest(){// ctest 클래스의 생성자 함수 선언 및 정의, 이름이 class와 같아야 한다. 
        m_ndata =10;//인스턴스가 생성되면 자동으로 초기화 된다.
    }

    int m_ndata;// 멤버 데이터 생성

    void printdata(void){//멤버 한수 선언 및 정의
        cout<< m_ndata<<endl;//멤버 데이터에 접근하고 값을 출력한다.
    }
};

int main(){
    ctest t;
    t.printdata();

    return 0;
}