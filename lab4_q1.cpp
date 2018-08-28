//using library
#include<iostream>
using namespace std;
//use main function
int main (){
//declaring variables
float length1,length2,length3;
cout << "Enter length in centimeter " << endl;
cin >> length1;
//calculation
length2 = length1 / 100;
length3 = length1 / 100000;
//print the result
cout << "Length in meter is : " << length2 << endl;
cout << "Length in kilometer is : " << length3 << endl;
return 0;
}
