#include<iostream>
using namespace std;


int main()
{
int a,b;
char op;
cout<<"Enter the First number: "<<endl;
cin>>a;
cout<<"Enter the  Second number: "<<endl;
cin>>b;
cout<<"Enter the operator from the +.-,*,/ : "<<endl;
cin>> op;


switch(op)
{
case'+':
       cout<<"The addtion is: "<<a+b<<endl;
       break;
case'-':
       cout<<"The subtraction is: "<<a-b<<endl;
       break;
case'*':
       cout<<"The multiplication is: "<<a*b<<endl;
       break;
case'/':
      cout<<"The division is: "<<a/b<<endl;
       break;
default:
      cout<<"Please Enter the valid operator"<<endl;
      break;

};
cout<<"End of the program";

return 0;
}

