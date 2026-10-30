#include<iostream>
using namespace std;

void calculate() {
class calculator
{
public:
int add(int a, int b){
 return a+b;
}
int multiply(int a, int b) {
 return a*b;
}
};
calculator c;

cout<<"------This is local class------"<<endl;
cout<<"Addition       :"<<c.add(10,20)<<endl;
cout<<"Multiplication : "<<c.multiply(10,20)<<endl;
}

int main()
{
calculate();
cout<<"------ End of The Program*------"<<endl;
return 0;
}
