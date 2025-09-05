#include <iostream>
#include <string>
using namespace std;

class Room{

public:

    int r_size; //Data member
    string r_col;

    Room(int new_size, string new_color){ //Constructor

    r_size = new_size;
    r_col = new_color;
    }

    ~Room() { //Destructor
        cout << "\nRoom destroyed: " << r_col << " (" << r_size << " sq ft)" << endl;
    }

    void disp(){ //Method

    cout<<"Room Size = " <<r_size <<" sq ft"<<endl;
    cout<<"Room Color = " <<r_col <<endl;
    }


};

int main(){

Room myroom(150, "Blue"); //Creating object while passing values

myroom.disp(); //Calling method

return 0;
}
