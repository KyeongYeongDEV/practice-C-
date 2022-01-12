#include<iostream>
using namespace std;

//템플릿 매개변수를 함수처럼 선언한다.
template<typename T, int nsize> //형식을 여러 개 선언
class cmyarray{
    public:
        //이하 코드에 보이는 모든 nsize 번수는 템플릿 매개변수이다.
        cmyarray(){m_pdata = new T[nsize];}
        ~cmyarray(){delete[] m_pdata;}

        //배열연산자
        T& operator[](int nindex){
            if(nindex < 0|| nindex >= nsize){
                cout<< "ERROR: 배열의 경계를 벗어난 접근입니다." <<endl;
                exit(1);
            }

            return m_pdata[nindex];
        }

        //상수화된 배열 연산자
        T& operator[](int nindex) const {return operator[](nindex);}

        //배열 요소의 개수를 반환
        int getsize(){return nsize;}

    private:
        T *m_pdata = nullptr;
};

int main(){
    cmyarray<int, 3>arr; //

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;

    for(int i =0; i <3; i++){
        cout << arr[i] <<endl;
    }

    return 0;
}
/* template <typename T =int, int nsize = 3> 로 선언을 하고

cmyarray<  > arr; 
이런 식으로 선언을 할 수도 있다  