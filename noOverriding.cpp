#include<iostream>
using namespace std;

class baseclass {
    public :
    virtual void perkenalan() final {
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