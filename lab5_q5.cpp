// program to check whether a number is even or odd. 

//include library
#include<iostream>
using namespace std;

//including function
int main()
{

//declaring variable
int a;

//asking for numbers

cout << " Enter number:";
cin >> a;


//conditional structure
if (a % 2 == 0){
                  cout << " the number is even"<<endl; 
          }
else{
     cout << a << " the number is odd"<<endl;
}

return 0;
}
