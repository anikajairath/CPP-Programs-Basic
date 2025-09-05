#include <iostream>
#include <string>
using namespace std;

class Room{

public:

int r_size;
string r_col;

    Room(int new_size, int new_color){ //Contructor

    r_size = new_size; // Data member
    r_col = new_color; // Data member
    }

    void disp(){ // Method (Member function)

    cout<<"Room Size = " <<r_size <<" sq ft"<<endl;
    cout<<"Room Color = " <<r_col <<endl;

    }
};

int main(){

Room myroom; //Create an object of class

myroom.r_size = 150;
myroom.r_col = "Blue";

myroom.disp(); //Calling the method from the class

}
