#include <iostream>
using namespace std;

class parent{
    public:

    void i(){
    cout << "i am parent" << endl;
    }
};

class child : public parent{
    public:

    void you(){
        cout << "i am your chid" << endl;
    }
};

int main(){

    child one;

    one.i();
    one.you();
};
