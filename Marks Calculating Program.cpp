#include <iostream>
#include <string>
using namespace std;

class Student{

private:
string name;
float t_marks;

float avg_marks;

public:

    void getInput(){

    cout<<"ENTER NAME:"<<endl;
    getline(cin, name);
    cout<<"\nENTER TOTAL MARKS:"<<endl;
    cin>>t_marks;
    }

    void calcAvg(int no_of_subs){

    if (no_of_subs > 0) {
            avg_marks = t_marks / no_of_subs;
        } else {
            avg_marks = 0;
            cout << "\nError: Number of subjects must be greater than 0.\n";
        }
    }

    void displayDetails() {
        cout << "\n--- Student Details ---\n";
        cout << "Name: " << name << endl;
        cout << "Total Marks: " << t_marks << endl;
        cout << "Average Marks: " << avg_marks << endl;
    }
};

int main(){

Student s;

s.getInput();
int nos;

cout<<"\nENTER THE NO OF SUBJECTS"<<endl;
cin>>nos;

s.calcAvg(nos);
s.displayDetails();

}
