#include <iostream>
#include <string>
using namespace std;

class Book{

public:
    string title;

    Book(string t){
        title = t;
        }

    Book(const Book &source){
    title = source.title;
    cout<<"Copy Constructor called!"<<endl;
    }

    void showTitle(){
    cout<<"\nBook Title: "<<title<<endl;
    }
};

int main(){

Book origBook("Lost Symbol");
Book copyBook = origBook;

origBook.showTitle();
copyBook.showTitle();

return 0;
}
