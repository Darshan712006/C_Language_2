#include <iostream>
using namespace std;

class animal{
    public:

    void a(){
        cout << " we are animal" << endl;
    }
};
class dog {
    public:

    void b(){
        cout << "i am dog" << endl;
    }
};
class cat : public dog, public animal{
    public:

    void c(){
        cout << "i am cat" << endl;
    }
};

int main(){
    cat one;
    
    one.a();
    one.b();
    one.c();
};