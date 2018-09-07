// program to print all natural numbers in reverse (from n to 1)

//include library
#include<iostream>
using namespace std;

//including function
int main()
{

//declaring variable
int n,i;

//asking for input

cout << " Enter Number: "<<endl;;
cin >> n;

//loop stucture
i = 1;
while (n+1 > i){
		
		cout << n - i << endl;
		i++; //i=i+1
}

return 0;
}

