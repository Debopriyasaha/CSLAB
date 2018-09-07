// program to print all natural numbers from 1 to n.

//include library
#include<iostream>
using namespace std;

//including function
int main()
{

//declaring variable
int n,i;

//asking for input

cout << " Enter upper limit: "<<endl;
cin >> n;

// print numbers from 1 to n.
i = 1;
while (n >= i){
		
		cout << i << endl;
		i++;
}

return 0;
}

