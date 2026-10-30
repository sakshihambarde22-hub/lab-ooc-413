// Expriment No.1
/*Implement a program to define a student class with attributes like 
name,roll no, and marks Implemnet member funtions to input and display student detiles 
Extra:"Mam Told to take info of thefive Students"
*/

#include<iostream>
#include<string>
using namespace std;

class Student {
    private:
    string name;
    int roll_no;
    float marks;
    public:
    void input(){
        cout<<"---------- Enter the Stuudent Details ----------"<<endl;
        cout<<"Enter the Student Name     : ";
        getline(cin,name); //This help to get the full name 
        cout<<"Enter the Student Roll NO. : ";
        cin>>roll_no;
        cout<<"Enter Student Marks (CGPA) : ";
        cin>>marks;
                }
    void display() {
        cout<<"--------------     Student Info  --------------"<<endl;
        cout<<"Student Name     : "<<name<<endl;
        cout<<"Student Roll No. : "<<roll_no<<endl;
        cout<<"Student Marks    : "<<marks;

    }
};

int main()
    {
     Student s;
     s.input();
     s.display(); 
     cout<<"\n-------- End of the Program --------\n"<<endl;
    }
