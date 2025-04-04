#include <iostream>
using namespace std;

class vehicle{
    private:

    char model[20];
    int speed;

    public:
    int setData(){
        cout << "ENTER YOUR VEHICLE MODEL: " << endl;
        cin >> this->model;
        cout << "ENTER YOUR VEHICLE SPEED: " << endl;
    }

    int getData(){
        cout << "YOUR VICLE MODEL IS : " << this->model << endl;
        cout << "YOUR VEHICLE SPEED IS : " << this->speed << endl;
    }
};

class car : public vehicle{

};

class bike : public vehicle{

};

int main(){

    car one;

    one.setData();
    one.getData();

    
}

    