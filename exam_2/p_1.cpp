#include <iostream>
using namespace std;

class movie{
    private:

    char title[20];
    char genre[20];
    int releasedyear;

    public:

    int setdata(){

        cout << "ENTER MOVIE TITLE: " << endl;
        cin >> this->title;
        cout << "ENTER GENRE OF MOVIE: " << endl;
        cin >> this->genre;
        cout << "ENTER RELEASED YEAR: " <<  endl;
        cin >> this->releasedyear;
    }

    int getdata(){

        cout << "YOUR MOVIE TITLE IS: " << this->title << endl;
    
        cout << "YOUR MOVIE GENRE IS: " << this->genre << endl;
    
        cout << "YOUR MOVIE RELESED YEAR IS: " << this->releasedyear << endl;
    
    }
};

int main(){

    movie one;

    one.setdata();
    one.getdata();
}