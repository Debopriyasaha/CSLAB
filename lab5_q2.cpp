// program to find maximum between two numbers. 

//include library
#include<iostream>
using namespace std;

//including function
int main()
{

//declaring variable
int a, b, c;

//asking for inpute
cout << "Enter numbers:" << endl;
cin >> a >> b >> c;


//conditional structure
if (a > b){
  if (a > c){
    cout << a << " is Maximum" << endl;
	}
}
else if (b > c){	 
  if (b > a){
    cout<< b << " is Maximum" << endl;
	}
}
else{
	 cout<< c << " is Maximum" << endl;
}



return 0;
}
