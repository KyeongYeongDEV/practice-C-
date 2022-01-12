#include<iostream>
using namespace std;
//동적 객체의 생성과 소멸
class ctest{
    public:
    ctest(){
        cout<< "ctest::ctest()"<<endl;
    }
    ~ctest(){
        cout<<"~ctest::ctest() "<<endl;
    }
};

int main(){
    cout<<"Begin"<<endl;

    //new연산자를 이용해 동적으로 객체를 생성한다.
    //배열로 new연산을 수행할 수 있다.
    ctest *pdata = new ctest[3];
    cout<< "test"<<endl;

    delete[] pdata; 
    //delete 연산자를 이용해 객체를 삭제한다. 
    //배열로 생성한 것은 반드시 배열로 삭제한다. 
    //그렇지 않으면 첫 번째 요소 하나만 소멸하고 나머지는 그대로 메모리에 남는다.
    cout<< "End"<<endl;

    return 0;
}
/*  출력
Begin
ctest::ctest()
ctest::ctest()
ctest::ctest()
test
~ctest::ctest() 
~ctest::ctest() 
~ctest::ctest() 
End
*/