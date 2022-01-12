#include<iostream>
using namespace std;

class ctest{
    public:
    ctest(){}

    int mdata1=10, mdata2 =20;  //선언과 동시에 초기화

    void printdata(){
        cout<< mdata1<<endl;
        cout<< mdata2<<endl;
    }
};

int main(){
    ctest t; //실행과 동시에 10~13번행 실행
    t.printdata(); // 16~19번 행 호출

    return 0;
}