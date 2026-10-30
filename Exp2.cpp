#include<iostream>
using namespace std;

class Complex {
public:
    int real;
    int ima;

    Complex() {
        real = 0;
        ima = 0;
    }

    Complex(int r, int i) {
        real = r;
        ima = i;
    }

    Complex add(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.ima = ima + c.ima;
        return temp;
    }

    Complex subtract(Complex c) {
        Complex temp;
        temp.real = real - c.real;
        temp.ima = ima - c.ima;
        return temp;
    }

    void display() {
        if (ima >= 0)
            cout << real << " + " << ima << "i" << endl;
        else
            cout << real << " - " << -ima << "i" << endl;
    }
};

int main() {
    Complex c1(5, 3);
    Complex c2(2, 7);

    Complex sum = c1.add(c2);
    Complex diff = c1.subtract(c2);

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    cout << "Addition: ";
    sum.display();

    cout << "Subtraction: ";
    diff.display();

    return 0;
}
