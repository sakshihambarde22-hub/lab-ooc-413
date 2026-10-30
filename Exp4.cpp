// Experiment Number 4 
/* Implement a rectangle class with attributes for length and width. 
   Include constructor and destructor and member functions to calculate the area and perimeter */ 

#include <iostream> 
using namespace std; 

class Rectangle { 
private: 
    double length, width; 

public: 
   
    Rectangle() : length(1), width(1) {} 

    
    Rectangle(double len, double wid) : length(len), width(wid) {} 

   
    ~Rectangle() { 
        cout << "Rectangle Object is destroyed !!" << endl; 
    } 

   
    double getLength() const { 
        return length; 
    } 

    double getWidth() const { 
        return width; 
    } 

    
    void setLength(double len) { 
        length = len; 
    } 

    void setWidth(double wid) { 
        width = wid; } 


    double CalArea() const { 
        return length * width; 
    } 

    
    double CalPeri() const { 
        return 2 * (length + width); 
    } 
}; 

int main() { 
    cout << "====== Start Program ======" << endl; 

   
    Rectangle R(4, 5); 
    cout << "Constructor is created" << endl; 

    
    cout << "Length : " << R.getLength() << endl; 
    cout << "Width : " << R.getWidth() << endl; 
    cout << "Area : " << R.CalArea() << endl; 
    cout << "Perimeter : " << R.CalPeri() << endl; 

    cout << "====== End of the program =======" << endl; 
    return 0; 
}
