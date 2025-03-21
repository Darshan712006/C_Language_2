#include <iostream>
using namespace std;

int main(){

    float a,b,c;

    cout << "ENTER MATHS MARK:";
    cin >> a;
    
    cout << "ENTER ENGLISH MARK:";
    cin >> b;
    
    cout << "ENTER SCIENCE MARK:";
    cin >> c;

    float avg_mark = (a + b + c)/3;
    cout << "EVERAGE MARK IS:-" <<  avg_mark;



}