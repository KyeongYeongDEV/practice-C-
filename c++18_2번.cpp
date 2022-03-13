#include<iostream>
using namespace std;

class Storage{
    private:
        int nData; // 공간의 크기
        int *strg; //아마 여기에 값을 받는다. 
    
    public:
        Storage(int ndata){
            this->nData = ndata;
            int *strg = new int[nData];            
        }
        ~Storage(){free(strg);}

        void showList(){

        }

        void addnData(){
            int cnt =0,num;

            while(1){
                if(cnt ==4){ //탈출
                    cout << "입력완료:";
                    for(int i=0; i < nData; i++){
                        cout <<" " <<strg[i];
                    }
                }

                cin >> num;
                for(int i =0; i < nData ;i++){
                    if(strg[i] == num){
                        cout << num<< "<중복>";
                    }
                }

                cnt++;
            }
        }
        //void subStrg()
};

int main(){
    Storage s1(4);
    s1.showList(); // 출력

    Storage s2(s1);
    s2.showList();

   // s2.addnData(3); 만들기
   s2.showList();
   //--------------------여기까지 3번
}