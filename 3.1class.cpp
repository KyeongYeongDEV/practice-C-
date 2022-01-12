#include<cstdio>

class userdata{
public://public을 사용함으로서 구조체 내부 멤버에 접근할 수 있다.
    int age;
    char name[32];

    void print(void){
        printf("%d, %s\n", age, name);//age와 name은 print의 지역 변수가 아니다.
    }

};



int main(){
    userdata user = {10, "철수"};
    user.print();
    
}