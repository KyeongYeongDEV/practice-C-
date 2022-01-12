#include<iostream>
using namespace std;
// 클래스 템플릿

template<typename T>
class cmydata{
    public:
        cmydata(T param) : m_data(param){}
        T getdata() const {return m_data;}

        //형식에 대한 변환자 제공
        operator T(){return m_data;}
        void setdata(T param){m_data = param;}

    private:
        //T형식의 멤버 변수 선언
        T m_data;
};

int main(){
    cmydata<int> a(5);
    cout << a << endl;
    cmydata<double> b(123.45);
    cout << b <<endl;

    //문자열을 저장하기 위해 메모리를 동적으로 할당하지는 않는다.
    cmydata<char *> c("hello");
    cout << c << endl;

    return 0;
}