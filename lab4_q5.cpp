//using library
#include<iostream>
using namespace std;
//use main function
int main (){
//declaring variables
float angle1,angle2,angle3;
cout << "Enter the value of first angle " << endl;
cin >> angle1;
cout << "Enter the value of second angle " << endl;
cin >> angle2;
//calculation
angle3 = 180 - (angle1 + angle2);
//print the result
cout << "Value of third angle is : " << angle3 << endl;
return 0;
}
