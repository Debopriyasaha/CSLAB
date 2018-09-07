// programe to print hollow square 
//including library
#include<iostream>
using namespace std;
int main()
{


int i,j,n;
cout<< "enter no of row : ";
cin>>n;


	// do the following n times
	//print hollow square 
	for(i=0;i<n;i++){
		for(j=1;j<n+1;j++){
		if((i==0)||(i==n-1)||(j==1)||(j==n)){
		cout << "*";
		}
		else
		cout <<" ";
		}
	//go to next line
	cout <<endl;
	}
return 0;
}
