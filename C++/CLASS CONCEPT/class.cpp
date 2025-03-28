        #include <iostream> 
using namespace std;
#include <string.h>

class person{
    public :
        char name[50], city[50];
        int age,number;
};

int main(){
    person one;
    strcpy(one.name,"rahul");
    one.age = 23;
    one.number = 234;
    strcpy(one.city,"rajkot");

    person two;
    strcpy(two.name,"jyot");
    two.age = 33;
    two.number = 134;
    strcpy(two.city,"rjkt");

    cout << one.name << endl;
    cout << one.age << endl;
    cout << one.city << endl;
    cout << one.number << endl;
   
    cout << two.name << endl;
    cout << two.age << endl;
    cout << two.city << endl;
    cout << two.number << endl;

}