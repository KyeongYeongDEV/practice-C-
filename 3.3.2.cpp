#include<iostream>
using namespace std;
//디폴트 생성자의 생략
class ctest{
    int mdata;
    public:    

    ctest(int num):mdata(num){//생성자의 매개변수로 전달된 값으로 멤버 변수를 초기화한다.
        cout<< "ctest::ctest()"<<endl;
    }
    ~ctest(){//생성할 때 매개변수로 값을 출력한다.
        cout<<"~ctest::ctest() "<<mdata<<endl;
    }
};

int main(){
    cout<<"Begin"<<endl;
    ctest a(1); //생성과 동시에 변수에 수를 대입
    cout<< "Before b"<<endl;
    ctest b(2);
    cout<< "End"<<endl;

    return 0;
}
/*  출력
Begin
ctest::ctest()
Before b
ctest::ctest()
End
~ctest::ctest() 2 <- 나중에 생성된 것부터 없어진다.
~ctest::ctest() 1
*/