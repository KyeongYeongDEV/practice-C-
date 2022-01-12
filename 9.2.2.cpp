#include<iostream>
using namespace std;

template<typename T>
class cmydata{
    cmydata(T param) : m_data(param){}

    T getdata() const {return m_data;}
    void setdata(T param){m_data = param;}

private:
    T m_data;    
};

template<>
class cmydata<char*>{
    public:
        cmydata(char *pszparam){
            int nlen = strlen(pszparam);
             m_data = new char[nlen +1];
        }

        ~cmydata(){delete[] m_data;}
        char* getdata() const {return m_data;}    
    private:
        char* m_data;   
};

int main(){
    cmydata<char*> a("hello");
    cout << a.getdata() << endl;
}

