#include <iostream>
using namespace std;

class Student{

    string name;
    int age;

public:

    Student(string n, int a) {
    name = n;
    age = a;
}

    void display(){
    cout<<"\nThis is the Name: "<<name<<"\nthis is the age: "<<age<<endl;
    }
    };

int main(){

Student* students[3];

students[0] = new Student("Ann", 23);
students[1] = new Student("Charu", 35);
students[2] = new Student("Amit", 43);

cout<<"Now displaying Students info:-\n"<<endl;

for(int i = 0; i<3; i++){
    students[i]->display();
}

return 0;
}
