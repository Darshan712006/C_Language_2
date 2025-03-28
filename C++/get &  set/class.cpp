#include <iostream>
using namespace std;
#include <string.h>

class person{
    private:
     int rollNo;
     char name[50];
     char city [50];

    public:
     setData(int rollNo, const char* name, const char* city){
        this ->rollNo = rollNo;
        strcpy(this->name,name);
        strcpy(this->city,city);
    };

     getData(){
        cout << this->rollNo << endl;
        cout << this->name << endl;
        cout << this->city << endl;
    };
};

int main(){
    person one;
    one.setData(123,"rahul","rajkot");
    one.getData();

    person two;
    two.setData(124,"sumit","amreli");
    two.getData();
}
