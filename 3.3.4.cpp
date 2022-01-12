#include<iostream>
using namespace std;

//참조자 선언을 위한 생성자 초기화 목록 이용
class cReftest{
    public:
    cReftest(int &rparam) : mdata(rparam){};
    int getdata(){return mdata;}
    
    private:
    int &mdata; //참조형 멤버는 객체가 생성될 때 반드시 초기화헤야 한다.
    
};

int main(){
    int a =10;
    cReftest t(a);

    cout<< t.getdata()<<endl;
    a =20;
    

    return 0;
}