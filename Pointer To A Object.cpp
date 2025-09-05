#include <iostream>
using namespace std;

class Car{

public:
    int speed;


    void showSpeed(){
    cout<<"\nSpeed = " <<speed<<endl;
    }
};

int main(){

Car myCar;
myCar.speed = 60;
myCar.showSpeed();

Car*carPtr = &myCar;
carPtr->speed = 80;
carPtr->showSpeed();

return 0;
}
