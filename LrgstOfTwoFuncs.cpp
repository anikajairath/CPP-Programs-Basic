#include <iostream>
using namespace std;

int findMax(int x, int y, int z){

    int maxVal;

     if(x>=y && x>=z){

        maxVal = x;
    }

    else if(y>x && y>=z){

        maxVal = y;

    }
    else if(z>x && z>y){

        maxVal = z;

    }
    return maxVal;
}

int findMin(int x, int y, int z){

    int minVal;

     if(x<=y && x<=z){

        minVal = x;
    }

    else if(y<x && y<=z){

        minVal = y;

    }
    else if(z<x && z<y){

        minVal = z;

    }
    return minVal;
}

int main(){

    int a, b, c, mini, maxi;

    cout<<"Enter A Number:"<<endl;
    cin>> a;

    cout<<"\nEnter A Number:"<<endl;
    cin>> b;

    cout<<"\nEnter A Number:"<<endl;
    cin>> c;

    mini = findMin(a,b,c);
    maxi = findMax(a,b,c);

    cout<<"\n"<<mini<<" is the smallest of all numbers"<<endl;
    cout<<"\n"<<maxi<<" is the biggest of all numbers"<<endl;


return 0;}
