#include <iostream>
using namespace std;

int main()
{

int num1=0;
float num2=0;
cout<<"Enter two numbers";
cin>>num1>>num2;
int sum,sub,mul;
float div;
sum=num1+num2;
sub=num1-num2;
mul=num1*num2;
div=num1/num2;
cout<<"The addition of the numbers is: "<<sum<<endl;
cout<<"The subtraction of the numbers is: "<<sub<<endl;
cout<<"The multiplication of the numbers is: "<<mul<<endl;
cout<<"The division of the numbers is: "<<div<<endl;

return 0;
}