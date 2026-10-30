#include<iostream>
using namespace std;


class Car {
public:
class Engine {
public:
void start() {
         cout<<"Engine Started."<<endl;
         }
             };
void drive() {
         cout<<"Car is driving."<<endl;
                }
          };
int main() {
 Car::Engine e;

cout<<"------This is Nested  class------"<<endl;
e.start();
Car c;
c.drive();
cout<<"------End of the Program------"<<endl;
return 0;

}



