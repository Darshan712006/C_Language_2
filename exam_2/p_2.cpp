#include <iostream>
using namespace std;

class Bank_Account{
    private:

    int accountNumber;
    char accountHoldername[50];
    int balance;

    public:

    int setData(){

        cout << "ENTER ACCOUNT NUMBER: " << endl;
        cin >> this->accountNumber;
        cout << "ENTER ACCOUNT HOLDER NAME: " << endl;
        cin >> this->accountHoldername;
        cout << "ENTER YOUR BALANCE: " << endl;
        cin >> this->balance;
    }

    void displayAccountInfo(){
        cout << "YOUR ACCOUNT NUMBER IS : " << this->accountNumber << endl;
        cout << "YOUR ACCOUNT NAME IS : " << this->accountHoldername << endl;
        cout << "YOUR CURRENT BALANCE IS : " << this->balance << endl;
    }
};

int main(){

    Bank_Account one;

    one.setData();
    one.displayAccountInfo();
}

