#include<iostream>
#include<string>
using namespace std;

class Book{
        string str; //책이름
        int price; //가격
        char *publishedData;  //출판일  09022018 2018년 9월2일

    public:
        Book(){
            str = nullptr;
            this->price = 0;
            publishedData = nullptr;
        }
        
        Book(char *title, int price, char *pData){
            const char *TT = title;
            str = TT;
            this->price = price;
            publishedData = pData;
        }

        void set(char *title, int price, char *pData){
            //책의 정보를 수정
            str = title;
            this->price =price;
            publishedData = pData;
        }

        int compare(char *str1, char *str2){ //이걸 이용해 책이름 비교
            //리턴을 참불로 반환하게
            if(str1 == str){
                str = str2;
                return 1;
            }
            else return -1;
        }

        void show(){
          //아마 책 이름, 가격, 출팔일 2018년 9월2일 이런 형식으로 출력
            cout << "책 이름 : " << str<<"\n";
            cout << "책 가격 : " << price <<"\n";
            cout << "출판일  : " << publishedData[4]<< publishedData[5]<< publishedData[6]<< publishedData[7]
            <<"년 " <<  publishedData[0]<< publishedData[1]<<"월 "<< publishedData[2]<< publishedData[3]<<"일\n";
        }
};


int replaceBookTitle(Book *books, int nbks, char *oldtitle, char *newtitle){
//교체할 이름을 가진 책을 찾으면 이름을 교체하고, 인덱스 반환, 없으면 -1반환
    for(int i=0; i < nbks; i++){        
        if(books[i]->compare(oldtitle,newtitle) >0){
            return i;
        }
        else return -1;
    }
    return 0;
}

int main(){
    Book bookShelf[3] = {   Book("c#프로그래밍",20000,"09012016"),
                            Book("c++", 25000, "09222018"),
                            Book()
    };
    cout << "---------\n";
    bookShelf[2].set("jave programming",28000,"12052017");

    bookShelf[0].show();
    bookShelf[1].show();
    bookShelf[2].show();


    if(int n = replaceBookTitle(bookShelf,3,"c++","C++")<0){
        cout<< "책 이름이 없습니다.";
    }
    else{
        bookShelf[n].show();
    }
    
}