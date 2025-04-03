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

    void deposit(int amount){
        this->balance += amount;
        cout << "Rs. " << amount << "ADDED IN YOUR ACCOUNT SUCCESSFULLY !";

    }
    void withdraw(int amount){
        this->balance -= amount;
        cout << "Rs. " << amount << "DEBITED FROM YOUR ACCOUNT !" << endl;
    }
    void checkBalance(){
        cout << "Rs. " << this->balance << "AVAILABLE BALANCE IS : " << endl;
    }
    void displayAccountInfo(){
        cout << "YOUR ACCOUNT NUMBER IS : " << this->accountNumber << endl;
        cout << "YOUR ACCOUNT NAME IS : " << this->accountHoldername << endl;
        cout << "YOUR CURRENT BALANCE IS : " << this->balance << endl;
    }
};

class saving_Account : public Bank_Account{};

class checking_Account : public Bank_Account{};

class fixed_Diposite_Account : public Bank_Account{};

int main(){

    Bank_Account user;

    while (true){
        int choice;

        cout << "*WELCOME TO OUR BANK*" << endl;
        cout << "Select Option From The List" << endl;
        cout << "1. OPEN YOUR ACCOUNT" << endl;
        cout << "2. DEPOSIT AMMOUNT IN YOUR ACCOUNT" << endl;
        cout << "3. CHECK YOUR ACCOUNR BALANCE" << endl;
        cout << "4. CHECK YOUR ACCCOUNT INFO." << endl;
        cin >> choice;

        if(choice == 1){
            user.setData();
        }
        else if(choice == 2){
            int amount;
            cout << "ENTER AMOUNT TO DEPOSITE :";
            cin >> amount;
            user.deposit(amount);
        }
    else if(choice == 3){
        user.checkBalance();
    }
    else{
        cout << "*THANK YOU FOR VISITING*" ;
        break;
    }
    }
    
}
