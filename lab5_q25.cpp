// program to print all even numbers between 1 to 100.
//include library
#include<iostream>
using namespace std;
//including function
int main()
{

//declaring variable
int n;

//tells user about programme
cout << "  Print all even numbers between 1 to 100."<<endl;


//printing output
n = 2;
while (n<101){
		if (n % 2 == 0){
		cout << n << endl;
		}
		n++;
}

return 0;
}

