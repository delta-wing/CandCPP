#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double height;char name[100];
const double Foot=3.28;
const double Inch=39.27;

int main(){
    cout << "May I have your name please? : "; cin >> name;
    cout << "Input your height(i.e. 1.80 meters): ____\b\b\b\b"; cin >> height;
    cout << "Hello " << name << " Your height in Foot is ";
    printf("%.2lf.\n",height*Foot);
    cout << "And your height in Inch is ";
    printf("%.2lf.\n",height*Inch);
    return 0;
}