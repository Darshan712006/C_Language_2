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
    static int trainCout;

    public:

    int setData(){
        cout << "ENTER TRAIN NUMBER: " << endl;
        cin >> this-> trainNumber;
        cout << "ENTER TRAIN NAME: " << endl;
        cin >> this->trainName;
        cout << "ENTER TRAIN SOURCE: " << endl;
        cin >> this-> source;
        cout << "ENTER TRAIN DESTINATION: " << endl;
        cin >> this-> destination;
        cout << "ENTER TRAIN TRAIN TIME: " << endl;
        cin >> this-> trainTime;
    }

    int getData(){
        cout << "train number" << this->trainNumber << endl;
        cout << "train name" << this->trainName << endl;
        cout << "train source" << this->source << endl;
        cout << "train destinatin" << this->destination << endl;
        cout << "train time" <<this->trainTime << endl;

    }
};

static int trainCount =  0;

int main(){
    train obj[100];
    int i = 0;
    int choice;

    while (true)
    {
      cout << "*RAILWAY RESERVATION SYSTERM MENU*" << endl;
      cout << "1: ADD NEW TRAIN RECORD" << endl;
      cout << "2: DISPLAY ALL TRAIN RECORD" << endl;
      cout << "3: EXIT" << endl;

      cin >> choice;

      if(choice == 1){
        obj[0].setData();
      }

      else if(choice == 2){
          obj[0].getData();
        }
        
       else if(choice == 3)
        {
         cout << "EXIT";
         break;
        }
        
    }
  }




