#include<iostream>
using namespace std;

class baseclass final{
    public :
    virtual void perkenalan(){
        cout << "halo saya function dari base class";
    }
};

class derivedclass : public  baseclass {
    public :
    void perkenalan () {
        cout << "halo saya function dari derived class";
    }
};

int main () {
    derivedclass a;
    a. perkenalan ();

    return 0;
}
// ga bisa karna ada final di class baseclass maka dari itu fungsi pada baseclass tidak dapat di panggil