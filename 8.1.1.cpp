/*
#include<iostream>
using namespace std;
// friend 예약어를 선언한 클래스

class cnode{
    //friend선언 
    friend class cmylist;

    public:
        explicit cnode(const char *pszname){
            strcpy_s(m_szname,sizeof(m_szname), pszname);
        }
    private:
        //단일 연결 리스트로 관리할 데이터
        char m_szname[32];
        cnode *pnext = nullptr;
};

class cmylist{
    public:
        cmylist(): m_headnode("dummy head"){}
        ~cmylist(){
            //리스트에 담긴 데이터들을 모두 출력하고 삭제
            cnode *pnode = m_headnode.pnext;
            cnode *pdelete = nullptr;

            while(pnode){
                pdelete = pnode;
                pnode = pnode -> pnext;

                cout<< pdelete -> m_szname<<endl;
                delete pdelete;
            }

            m_headnode.pnext = nullptr;
        }

        void addnewnode(const char *pszname){
            cnode *pnode = new cnode(pszname);

            //리스트에 새로운 노드를 추가
            pnode->pnext = m_headnode.pnext;
            m_headnode.pnext = pnode;
        }
    private:
        cnode m_nheadnod;
};

int main(){
    //메모리 추가/삭제 코드가 등장하지 않는다.
    cmylist list;
    list.addnewnode("길동");
    list.addnewnode("철수");
    list.addnewnode("영희");

    return 0;
}
*/