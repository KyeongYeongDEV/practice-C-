#include<iostream>
using namespace std;

//public 모든 외부 접근 허용
//protected 모든 외부 접근 차단, 상속 관계에 있는 파생 클래스에서의 접근은 허용됨
//private 외부 및 파생 클래스의 접근도 모두 차단, 클래스를 선언할 때 별도로 접근제어 지시자를 기술하지 않으면 private로 간주


//객체 내부 멤버 변수의 잉의 접근 차단
class stest{
    int mdata;// 기본 접근 제어 지시자 private

    public:
        int getdata(){return mdata;}
        int stedata(int nparam){mdata = nparam; return 0;}
};

int main(){
    stest data;
    data.stedata(10);
    cout<< data.getdata()<<endl;

    //data.mdata=10; 블가능 

    return 0;
}