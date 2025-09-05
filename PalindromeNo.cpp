#include <iostream>
using namespace std;

int main(){

int n, orig, r;
int rev = 0;

cout<<"Enter A Number:"<<endl;
cin>> n;

orig = n;

while(n > 0){

    r = n%10;
    n = n/10;
    rev = (rev*10)+r;
}

if(rev == orig){

    cout<<"\nThe number is palindrome as "<<orig<<" = "<<rev<<endl;
}

else{cout<<"\nThe number is not palindrome as "<<orig<<" != "<<rev<<endl;}

return 0;}
