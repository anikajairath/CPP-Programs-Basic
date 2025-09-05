#include <iostream>
using namespace std;

class num{

private:
    int value;

public:

    num(int n){
    value = n;
    }

    friend int add(const num& n1, const num& n2);
    };

int add(const num& n1, const num& n2){
    return n1.value + n2.value;
    }

int main(){

num n1(10);
num n2(20);

cout << "The sum of the two numbers is: " << add(n1, n2) << endl;
}
