#include <iostream>
using namespace std;

int main(){

int uchoice = 0;

do{
    int choice, n1, n2, res;

cout <<"CHOOSE ONE OF THE FOLLOWING OPTIONS:\n"<<endl;
cout <<"1 FOR ADD (+)\n"<<endl;
cout <<"2 FOR SUBTRACT (-)\n"<<endl;
cout <<"3 FOR PRODUCT (x)\n"<<endl;
cout <<"4 FOR DIVISION (/)\n"<<endl;

cin >> choice;

cout<< "\nENTER THE FIRST NO\n"<<endl;
cin>>n1;
cout<< "\nENTER THE SECOND NO\n"<<endl;
cin>>n2;

switch(choice){

case 1: res = (n1+n2);
        break;

case 2: res = (n1-n2);
        break;

case 3: res = (n1*n2);
        break;

case 4: (float) res;
        res = (n1/n2);
        break;

default: cout<<"ENTER A VALID OPTION"<<endl;
        break;

    }

cout<<"\nTHE RESULT = " <<res<<endl;

cout<<"\nDO U WANT TO CONTINUE? ENTER 0 FOR YES/1 FOR NO...\n"<<endl;
cin>>uchoice;
cout<<"\n"<<endl;

}while(uchoice == 0);

cout<<"END OF PROGRAM"<<endl;

return 0;

}
