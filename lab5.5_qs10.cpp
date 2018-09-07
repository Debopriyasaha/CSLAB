//Programe to print Mirrored Right Triangle
//including library

#include<iostream>
using namespace std;

int main()
{

	int i,j,m;
	cout<<"enter no. of Row : ";
	cin>> m;
		for(int i=1,j; i<=m; i++){
		
		//print space
		for(j=1; j<m; j++){
		cout<< " ";
		}
		//print star
		for(j=1; j<=i; j++){
		     cout<< "*";
		}
		cout << endl;
	}
cout << endl;
return 0;
}




