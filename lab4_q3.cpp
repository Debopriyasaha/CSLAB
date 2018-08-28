//using library
#include<iostream>
using namespace std;
//use main function
int main (){
//declaring variables
float tempc,tempf;
cout << "Enter temperature in fehrenheit " << endl;
cin >> tempf;
//calculation
tempc = ((tempf - 32) / 9) * 5;
//print the result
cout << "Temperature in celsius is : " << tempc << endl;
return 0;
}
