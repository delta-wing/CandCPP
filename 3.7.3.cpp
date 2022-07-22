#include <iostream>
#include <cmath>
#include <limits.h>
using namespace std;
int degree,minutes,seconds;
double degrees(){
    return degree+(minutes/60)+(seconds/3600);
}
int main(){
    cout << "Enter a latitude in degress, minutes, and seconds: " << endl;
    cout << "First, enter the degree: ";cin >> degree;
    cout << "Second, enter the minutes of arc: ";cin >> minutes;
    cout << "Finally, enter the second of arc: ";cin >> seconds;
    cout << degree << " degrees " << minutes <<" minutes " << seconds << " seconds " 
    << " = " << degrees() << " degrees ";
}