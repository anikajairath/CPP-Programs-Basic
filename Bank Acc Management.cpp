#include<iostream>
using namespace std;

class BankAccount{ //Declaring BankAcc class with name and balance

private:
        string owner;
        double balance;

public:

    BankAccount(string n, double bal){ //Constructor

    owner = n;
    balance = bal;
    }

    void deposit(double amt){ //Function called for deposit
    balance = balance + amt;
    cout << "Deposited: " << amt << " New Balance: " << balance << endl;
    }

    void withdraw(double amt){ //Function called for withdrawl

    if(amt>balance){ //If the balance is less
        cout<<"Insufficient funds!"<<endl;
    }
    else{
    balance = balance - amt;
    cout << "Withdrawn: " << amt << " New Balance: " << balance << endl;
    }
    }

    void disp(){ //Function called for display

    cout<<"\nAccount Owner: "<<owner<<endl;
    cout<<"Account Balance: "<<balance<<endl;
    }

};

int main(){
    string n;
    double b;
    int uch = 0; //User choice

    cout<<"\nEnter the Name of the owner"<<endl;
    getline(cin, n);
    cout<<"\nEnter initial balance"<<endl;
    cin>>b;

    BankAccount acc145(n, b); //Object created

    do{
        int ch;
        int amt;

        cout<<"\nChoose 1 for deposit"<<endl;
        cout<<"Choose 2 for withdrawl"<<endl;
        cout<<"Choose 3 for display details"<<endl;
        cin>>ch;

        switch(ch){

        case 1:{
            cout<<"\nEnter the deposit amt:"<<endl;
            cin>>amt;
            acc145.deposit(amt);
            break;
        }
        case 2:{
            cout<<"\nEnter the withdrawl amt:"<<endl;
            cin>>amt;
            acc145.withdraw(amt);
            break;
        }
        case 3:{
            cout<<"\nDisplaying Account details:"<<endl;
            acc145.disp();
            break;
        }
        default: cout<<"Enter a valid choice"<<endl;
                    break;


        cout<<"\nDo you want to continue? Enter 1 to exit, 0 to continue"<<endl;
        cin>>uch;}

    }while(uch == 0);

    cout<<"\nFinal Details: "<<endl;
    acc145.disp();


return 0;
}
