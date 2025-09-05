#include <iostream>
using namespace std;

class Counter{

private:

    static int count_var;

public:
    static void increment(){
    count_var++;
    }

    static int disp_count(){
    return count_var;
    }

};

int Counter::count_var = 0;

int main(){

    cout<<"The Initial value of Counter = "<<Counter::disp_count()<<endl;

    Counter::increment();
    Counter::increment();

    cout<<"Value of Counter after incrementing twice = "<<Counter::disp_count()<<endl;

}
