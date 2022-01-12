#include<iostream>
using namespace std;
//생성자외 소멸자

class ctest{
    public:
        ctest(){//생성자
            cout<<"ctest::ctest()"<<endl;
        }
        ~ctest(){
            cout<<"~ctest::stest()"<<endl;
        }
};

int main(){//소멸자
   /*
    cout<< "begin"<<endl;
    ctest a;
    cout << "end"<<endl;
    //소멸자는 제일 마지막에 실행된다.
    */

    cout<< "begin"<<endl;
    ctest a;
    cout<<"before b"<<endl;
    ctest b;
    cout << "end"<<endl;
    //main함수의 마지막 구문이 실행된 후 내부에 선선된 지역 변수들이 소멸된다.

    //main()함수가 호출되기 전에 생성자가 호출될 수 있다.
    //생성자는 다중 정의할 수 *있다.
    //소멸자는 다중 정의할 수 *없다.
    //main()함수가 끝난 후에 소멸자가 호츨될 수 있다.
    //생성자와 소멸자는 생략할 수 있으나 *생략할 겨우 컴파일러가 만들어 넣는다.

    return 0;
}