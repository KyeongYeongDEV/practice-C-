#include<iostream>
using namespace std;
//생성자 초기화 목록을 이용한 멤버 변수 초기화
class ctest{
    public:

    ctest()
    :mdata1(10),mdata2(20);//초기화 목룍을 이용하기 위해 반드시 함수원횽 다음에 콜론(:)을 기술해야 한다.
    

    int mdata1, mdata2; // 두 개의 멈버 데이터 선언

    void printdata(void){
        cout<<mdata1<<endl;
        cout<<mdata2<<endl;
    }
};

int main(){
    ctest t;
    t.printdata();

    return 0;
}