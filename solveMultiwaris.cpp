#include <iostream>
using namespace std;

class orang {
    public:
     int umur ;

     orang (int pumur) :
     umur (pumur)

     {
        cout << "orag dibuat dengan umur" << "\n" << endl;
     }
};

class pekerja : public orang {
   public :
   pekerja (int pumur) :
    orang (pumur) 
    {
      cout << "pekerja dibuat \n" << endl;
    }
};

class pelajar : public orang {
   public :
   pelajar (int pumur) :
   orang (pumur)
   {
      cout << "pelajar dibuat \n" << endl;
   }

};

class budi : public pekerja , public pelajar {
   public :
   budi (int pumur) :
   pekerja (pumur),
   pelajar (pumur)
   {
      cout << "Budi dibuat \n" << endl;
   }
};

int main () {
   budi a(12);

   return 0;
}