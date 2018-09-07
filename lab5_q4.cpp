// program to check whether a number is divisible by 5 and 11 or not. 

//include library
#include<iostream>
using namespace std;

//including function
int main(){

//declaring variable
int a;

//asking for input
cout << " Enter number:";
cin >> a;


//conditional structure
if (a % 11 == 0){
	          cout << a << " is divisible by 11\n"; 
	}
else if (a % 5 == 0){
	          cout << a << " is divisible by 5\n";
}
else
     cout << a << " number is not divisible by 5 and 11\n";


return 0;
}
