//programe to print Rhombus Star Pattern
//including library
#include<iostream>
using namespace std;

int main()
{
    //do the following for d times
	int d=5,i,j;

	//print Rhombus
		for(int i; i<5; i++){
	//print space
		for(j=0;j<=5-i;j++)
		{
		cout<< " ";
		}
	//print star
		for(j=0;j<5;j++)
		{
		cout<< "*";
		}
	//go to the next line
		cout<<endl;
}
return 0;
}
	
	

