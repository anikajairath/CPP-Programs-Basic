#include <iostream>
using namespace std;

class Bclass{

public:

    void show(){cout<<"\nThere is no ambiguity here as this is Virtual Base Class Method!"<<endl;}
};

class Dclass1 : virtual public Bclass{

    public:

    void D1_show(){cout<<"\nThis is D1 Method!"<<endl;}
};
class Dclass2 : virtual public Bclass{

    public:

    void D2_show(){cout<<"\nThis is D2 Method!"<<endl;}
};

class Dclass3: public Dclass1, public Dclass2{

    public:

    void D3_show(){cout<<"\nThis is D3 Method!"<<endl;}
};

int main(){

Dclass3 obj;
obj.show();
obj.D1_show();
obj.D2_show();
obj.D3_show();

}
