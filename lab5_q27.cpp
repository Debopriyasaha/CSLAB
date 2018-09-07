// program to find sum of all natural numbers between 1 to n. 

//include library
#include<iostream>
using namespace std;

//including function
int main()
{

//declaring variable
int n,i,s;

//asking for input
cout << " Enter upper limit: " <<endl;
cin >> n;

//loop stucture


for (i=1; i<n+1; i++){
		s = s + i;
		} 
		cout << s << endl;

return 0;
}

