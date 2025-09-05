#include <iostream>
using namespace std;

int findLargest(int a, int b){

return (a>b)? a:b;
}

int findLargest(int a, int b, int c){

return (a>b)? ((a>c)? a:c) : ((b>c)? b:c);
}

float findLargest(float a, float b){

return (a>b)? a:b;
}

float findLargest(float a, float b, float c){

return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
}

int main(){

int choice;

    cout << "Choose the type of input:\n";
    cout << "1. Two integers\n";
    cout << "2. Three integers\n";
    cout << "3. Two floating-point numbers\n";
    cout << "4. Three floating-point numbers\n";
    cout << "\nEnter your choice: "<<endl;
    cin >> choice;


    switch(choice){

    case 1: {int x, y;
            cout << "Enter two integers: ";
            cin >> x >> y;
            cout<< "\nThe largest value is: " << findLargest(x, y) << endl;
            break;}

    case 2: {int x, y, z;
            cout << "Enter three integers: ";
            cin >> x >> y >> z;
            cout << "\nThe largest value is: " << findLargest(x, y, z) << endl;
            break;}

    case 3: {float x, y;
            cout << "Enter two floating-point numbers: ";
            cin >> x >> y;
            cout << "\nThe largest value is: " << findLargest(x, y) << endl;
            break;}

    case 4: {float x, y, z;
            cout << "Enter three floating-point numbers: ";
            cin >> x >> y >> z;
            cout << "\nThe largest value is: " << findLargest(x, y, z) << endl;
            break;}

    default: cout << "\nInvalid choice!" << endl;

    }

}
