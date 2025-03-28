#include <iostream>
using namespace std;

class animal{
    public:

    void a(){
        cout << " we are animal" << endl;
    }
};
class dog : public animal{
    public:

    void b(){
        cout << "i am dog" << endl;
    }
};
class cat : public animal{
    public:

    void c(){
        cout << "i am cat" << endl;
    }
};
class food : public dog, public cat{
    public:

    void d(){
        cout << "we are need foods" << endl;
    }
};

int main(){
    food one;
    one.cat::a();
    one.b();
    one.c();
   
};