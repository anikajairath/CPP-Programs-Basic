#include <iostream>
using namespace std;

class Rectangle{

private:

int length;
int width;

public:

    Rectangle(){

    length = 0;
    width = 0;
    cout<<"Default Constructor called!"<<endl;
    }

    Rectangle(int side){

    length = side;
    width = side;
    cout<<"\nSquare Constructor called!"<<endl;

    }

    Rectangle(int l, int w){

    length = l;
    width = w;
    cout<<"\nRectangle Constructor called!"<<endl;

    }

    void dispDim() {
        cout << "\nLength: " << length << ", Width: " << width << endl;
    }
};


int main(){

Rectangle r1;
r1.dispDim();

Rectangle r2(4);
r2.dispDim();

Rectangle r3(4,5);
r3.dispDim();
}
