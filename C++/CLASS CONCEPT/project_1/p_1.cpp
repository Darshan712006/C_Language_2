#include <iostream>
using namespace std;
#include <string.h>

class time{
    public:
    void StoHHMMSS(int sec){
        int h = sec /3600;
        int m = (sec % 3600) /60;
        int s = sec % 60;

        cout << "HH:MM:SS ==> " << h << m << s << endl;}
        
        int hmstos(int h, int m,int s){
            return (h*3600) + (m*60) +  s;
        }
    };

    int main(){
        time tc;
        int choice;

        cout << "CHOICE YOUR OPTION: 1 or 2 \n CONVERT SEC. TO HH:MM:SS: 1 \n CONVERT HH:MM:SS TO SEC. : 2";
        cin >> choice;

        if(choice == 1){
            int sec;
            cout << "ENTER SECOND:";
            cin >> sec;
            tc.StoHHMMSS(sec);
        }

        else if (choice == 2){

            int h,m,s;
            cout << "ENTER HOURS: ";
            cin >> h;
            cout << "ENTER MINUTES: ";
            cin >> m;
            cout << "ENTER SECOND: ";
            cin >> s;

            cout << "TOTAL SEC.: " << tc.hmstos(h,m,s) << endl;
         }
        
    }
