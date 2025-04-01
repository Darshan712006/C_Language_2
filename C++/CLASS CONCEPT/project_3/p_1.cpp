#include <iostream>
using namespace std;

class vehicle{
    private:

    int vehicleId;
    char manufacture[50];
    char model[50];
    char year[50];
    static int totalvehicles;

    public:

    int setData(){

        cout << "ENTER VEHICLE ID: " << endl;
        cin >> this->vehicleId;
        cout << "ENTER MANUFACTURE DETAILS" << endl;
        cin >> this->manufacture;
        cout << "ENTER VEHICLE MODEL" << endl;
        cin >> this->model;
        cout << "ENTER VEHICLE REGISTRATION YEAR" << endl;
        cin >> this->year;
    }

    int getData(){

        cout << "VEHICLE ID: " << this->vehicleId << endl;
        cout << "MANUFACTURE DETAILS: " << this->manufacture << endl;
        cout << "VEHICLE MODEL: " << this->model << endl;
        cout << "VEHICLE REGISTRATION YEAR: " << this->year << endl;
    }
};

class car : public vehicle{
    private:

    char fuelType[50];
};

class electricCar : public car{
    private:

    int batteryCapacity;
};

class airCraft{
    private:

    int flightRange;
};

class flyingCar : public car, public airCraft{};

class sportCar : public electricCar{
    private:

    int topSpeed;
};

class sedan : public car{};

class suv : public car{};

static int totalvehicles = 0;
int main(){
     vehicle one;

     one.setData();
     one.getData();

     car two;

     two.setData();
     two.getData();
}
