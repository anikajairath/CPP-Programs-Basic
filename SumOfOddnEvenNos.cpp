#include <iostream>
using namespace std;

int sumEvn(int s, int e){

    int E_sum = 0;

    for(int i = s; i<= e; i++){ //Run a loop from start to end of the range

        if(i%2 == 0){ //If it is an even number
            E_sum = E_sum + i; //Add
        }

}
return E_sum;
}
int sumOdd(int s, int e){

int O_sum = 0;

    for(int i = s; i<= e; i++){ //Run a loop from start to end of the range

        if(i%2 != 0){ //If it is an odd number
            O_sum = O_sum + i; //Add
        }

}
return O_sum;
}

int main(){

    int strt, fin, Esum, Osum;

    cout<<"Enter Start of Range"<<endl;
    cin>>strt;

    cout<<"\nEnter End of Range"<<endl;
    cin>>fin;

    Esum = sumEvn(strt, fin); //Method to find the sum of even nos
    Osum = sumOdd(strt, fin); //Method to find the sum of odd nos


    cout<<"\nSum Of Even Nos b/w "<<strt<<" and "<<fin<<" = "<<Esum<<endl;
    cout<<"Sum Of Odd Nos b/w "<<strt<<" and "<<fin<<" = "<<Osum<<endl;

return 0;}
