//programe to print Inverted Right Triangle Star Pattern
//including library


#include<iostream>
using namespace std;


int main()
{
	int i,j,x;
	cout << "Enter Row No.: ";
	cin >> x;
		for(i=1;i<=x;i++){
		// Go to the next line
		    cout << endl;
		for(j=1; (x-i)>=j; j++){
		    cout << "*";
		    }
		}
cout <<endl;
return 0;
}
		
