
#include<iostream>
using namespace std;

template<typename T>
class cmyarray{
    public:
        explicit cmyarray(int nsize) : m_nsize(nsize){
            m_pdata = new T[nsize];
        }

        ~cmyarray(){delete[] m_pdata;}

        //복사생성자
        cmyarray(const cmyarray &rhs){
            m_pdata = new T[rhs.m_nsize];
            memcpy(m_pdata, rhs.m_pdata, sizeof(T) * rhs.m_size);
            m_nsize = rhs.m_nsize;
        }

        //대입연산자
        cmyarray& operator=(const cmyarray &rhs){
            if(this == &rhs){return *this;}

            delete m_pdata;
            m_pdata = new T[rhs.m_nsize];
            memcpy(m_pdata, rhs.m_pdata, sizeof(T)* rhs.m_nsize);
            m_nsize = rhs.m_nsize;

            return *this;
        }

        //이동 생성자
        cmyarray(cmyarray &&rhs){
            operator = (rhs);
        }

        //이동 대입 연산자
        cmyarray& operator = (const cmyarray &&rhs){
            m_pdata = rhs.m_pdata;
            m_nsize = rhs.m_nsize;
            rhs.m_pdata - nullptr;
            rhs.m_nsize =0;
        }

        //배열 연산자
        T & operator[](int nindex){
            if(nindex<0 || nindex >=m_nsize){
                cout << "ERROP: 배열의 경계를 벗어난 접근입니다." <<endl;
                exit(1);
            }

            return m_pdata[nindex];

            //상수화된 배열 연산자
            T& operator [](int nindex) const{
                return operator[](nindex);
            }

            //배열 요소의 개수를 반환
            int getsize(){return m_nsize;}
        } 
    private:
        T *m_pdata = nullptr;
        int m_nsize=0;
};

int main(){
    //int 자료형 배열
    cmyarray<int> arr(5);

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40; 
    arr[4] = 50;

    for(int i=0; i <5; i++){
        cout << arr[i] << ' ';
    }
    cout<<endl;

    cmyarray<int> arr2(3);
    arr2 = arr;
    for(int i =0; i <5; i++){
        cout << arr2[i]<< ' ';
    }
    cout<< endl;

    return 0;
}
*/