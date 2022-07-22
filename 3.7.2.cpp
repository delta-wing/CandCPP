#include <iostream>
#include <cmath>
#include <limits.h>
using namespace std;
char name[100];
int inch,foot;
float pound;
float InchToFoot(int inch){
    return inch * 12;
}
float footToMeter(){
    return InchToFoot(inch)*0.0254;
}
float poundToKg(float pound){
    return pound /2.2;
}
float BMI(){
    return poundToKg(pound)/footToMeter();
}
int main(void){
    cout << "May I have your name please?: ";cin >> name;
    cout << "May I have your height in inch if you don't mind?: ";cin >> inch;
    cout << "May I have your weight in pound if you don't mind?: ";cin >> pound;
    cout << name << " Here is your BMI report: " << printf("%.2lf",BMI()*2) << endl;
    return 0;
}
