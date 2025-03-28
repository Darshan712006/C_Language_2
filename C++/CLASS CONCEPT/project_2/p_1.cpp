#include <iostream>
using namespace std;
#include <string.h>

class train{
    private:

    int trainNumber;
    char trainName[50];
    char source[50];
    char destination[50];
    char trainTime[10];
    
    public :
    train(){
        cout << "default contructer";
    }

    train(int trainNumber,char trainName[50],char source[50],char destination[50],char trainTime[10]){
        this->trainNumber = trainNumber;
        strcpy(this->trainName,trainName);
        strcpy(this->source,source);
        strcpy(this->destination,destination);
        strcpy(this->trainTime,trainTime);
    }
    
    int setData(){
        cout << "ENTER TRAIN NUMBER: " << endl;
        cin >> this-> trainNumber;
        cout << "ENTER TRAIN NAME: " << endl;
        cin >> this-> trainName;
        cout << "ENTER TRAIN SOURCE: " << endl;
        cin >> this-> source;
        cout << "ENTER TRAIN DESTINATION: " << endl;
        cin >> this-> destination;
        cout << "ENTER TRAIN TRAIN TIME: " << endl;
        cin >> this-> trainTime;
    }

    int getData(){
        cout << this->trainNumber << endl;
        cout << this->trainName << endl;
        cout << this->source << endl;
        cout << this->destination << endl;
        cout << this->trainTime << endl;

    }
};
static int trainCount = 0;

int main(){
    train one;

    one.setData();
    one.getData();
}