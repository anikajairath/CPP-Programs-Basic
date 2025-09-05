#include <iostream>
using namespace std;

class ArithOps{

    float n1, n2;

public:

void input(){

cout<<"ENTER THE 1ST NUMBER:"<<endl;
cin>>n1;

cout<<"\nENTER THE 2ND NUMBER:"<<endl;
cin>>n2;
}


float add(){
return n1+n2;
};

float sub(){
return n1-n2;
};

float mul(){
return n1*n2;
};

float div(){
return n1/n2;
};

};

int main(){

    ArithOps obj;

    obj.input();

    cout<<"\nAddition: " << obj.add() << endl;
    cout<<"Subtraction: " << obj.sub() << endl;
    cout<<"Multiplication: " << obj.mul() << endl;
    cout<<"Division: " << obj.div() << endl;


return 0;}
