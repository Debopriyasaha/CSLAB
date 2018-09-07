// program to print all alphabets from a to z.

//include library
#include<iostream>
using namespace std;

//including function
int main()
{

//declaring variable
int c;

//tells user about programme
cout << "  Print all alphabets from a to z."<<endl;

//printing a to z
c = 97;
while (c<=122){
		
		cout << char(c)<< endl;
		c++;
}

return 0;
}

