#include <iostream>
#include <utility>
using namespace std;

int main(){

    int h1, m1, s1;
    int h2, m2, s2;

    cout<<"\nEnter The First Time (hh:mm:ss)"<<endl;
    cin>>h1>>m1>>s1;

    cout<<"\nEnter The Second Time (hh:mm:ss)"<<endl;
    cin>>h2>>m2>>s2;

    int totaltime1 = (h1*3600)+(m1*60)+s1;
    int totaltime2 = (h2*3600)+(m2*60)+s2;

    int sec_diff = totaltime1-totaltime2;

    if(sec_diff < 0){

        swap(totaltime1, totaltime2);
    }

    int diffHours = sec_diff/3600;
    sec_diff = sec_diff%3600;

    int diffMin = sec_diff/60;
    sec_diff = sec_diff%60;

    cout<<"\nThe Differnce is : "<<diffHours<< " Hours,"<<diffMin <<" Minutes,"<<sec_diff <<" Seconds"<<endl;


return 0;
}
