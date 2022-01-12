#include<iostream>
using namespace std;

//const_cast<> 를 사용한 상수형 참조 변경
void testfunc(const int &nparam){
    //상수형 참조였으나 일반 참조를 형변환했다.
    int &nNEWparam = const_cast<int &>(nparam);

    nNEWparam = 20;
}

int main(){
    int data =10;

    //상수형 참조로 전달하지만 값이 변경된다.
    testfunc(data);

    cout <<data <<endl;

    return 0;
}

//const_cast<새형식>(대상)