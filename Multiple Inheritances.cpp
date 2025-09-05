#include <iostream>
using namespace std;

class A{

public:

    void afunc(){
    cout<<"FUNC A"<<endl;
    }
};

class B{

public:

    void bfunc(){
    cout<<"\nFUNC B"<<endl;
    }
};

class C: public A, public B{

public :
    };

int main(){
C c_object;

c_object.afunc();
c_object.bfunc();
}
