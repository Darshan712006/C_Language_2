#include <iostream>
using namespace std;
#include <string.h>

class student{
    public:
        char name[50];
        int rollNo;
        char city[50];

        int setData(){
            cout << "enter student roll no. : ";
            cin >> this->rollNo;
            cout << "enter the student name : ";
            cin >> this->name;
            cout << "enter student's city : ";
            cin >> this->city;
        }

        int getData(){
            cout << this-> rollNo << endl;
            cout << this-> name << endl;
            cout << this-> city << endl;
        }
};


int main(){

    int num;
    cout << "enter number of student";
    cin >> num;

    student one[num];

    for (int i = 0; i < num; i++)
    {
    one[i].setData();
    }
    for (int i = 0; i < num; i++)
    {
    one[i].getData();
    }
    }