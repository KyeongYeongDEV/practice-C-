#include<iostream>
using namespace std;

//다른 생성자를 추가로 부르는 생성자 초기화 함수
class cmypoint{
    public:
    cmypoint(int x){
        cout<<"cmypoint(int)"<<endl;

        if(x >100){ x = 100;} // x가 100이 넘으면 100으로 초기화

        m_x = x;
    }

    cmypoint(int x, int y) :cmypoint(x){//x 값을 검사하는 코드는 이미 존재하므로 재사용한다.
            cout<<"cmypoint(int,int)"<<endl;

            if(y >200){ y = 200;} //y의 값이 200이 넘으면 200으로 초기화

            m_y = y;        
    }

    void print(){
        cout << "X:" << m_x<<endl;
        cout << "Y:" << m_y<<endl;
    }

    private:
        int m_x =0, m_y =0;
};

int main(){
    cmypoint ptbegin(110);
    ptbegin.print();

    cmypoint ptend(50, 250);
    ptend.print();
}

/* 출력
cmypoint(int)
X:100
Y:0
cmypoint(int)
cmypoint(int,int)
X:100
Y:200
*/