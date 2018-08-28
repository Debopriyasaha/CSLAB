//using library
#include<iostream>
using namespace std;
//use main function
int main (){
//declaring variables
float days,years,weeks;
cout << "Enter the number of days " << endl;
cin >> days;
//calculation
years = days / 365;
weeks = days / 7;
//print the result
cout << "Days in years is : " << years << endl;
cout << "Days in weeks is : " << weeks << endl;
return 0;
}
