#include<iostream>
#include<memory>
using namespace std;

template<typename T>
T add(T a, T b ){return a+b;}

// 두 개의 변수가 모드 char* 형식이면 이 함수로 대체된다.
template<>
char* add(char *pszleft, char *pszright){
    int nlenleft = strlen(pszleft);
    int nlenright = strlen(pszright);
    char *pszresult  = new char[nlenleft+ nlenright +1];

    //새로 할당한 메모리에 문자열을 복사한다.
   // strcpy_s(pszresult, nlenleft +1, pszleft);
   // strcpy_s(pszresult + nlenleft, nlenright+1, pszright);

    return pszresult;
}

int main(){
    int nresult = add<int>(3,4);
    cout<< nresult << endl;

    //char *pszresult = add<char*>("hello", "world");
   // cout<<pszresult <<endl;
    //delete[] pszresult ;

    return 0;
}