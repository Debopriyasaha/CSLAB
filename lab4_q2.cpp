//using library
#include<iostream>
using namespace std;
//use main function
int main (){
//declaring variables
float tempc,tempf;
cout << "Enter temperature in celsius " << endl;
cin >> tempc;
//calculation
tempf = ((9 * tempc) / 5 ) + 32;
//print the result
cout << "Temperature in fahrenheit is : " << tempf << endl;
return 0;
}
