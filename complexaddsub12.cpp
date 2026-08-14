#include <iostream>
using namespace std;

struct Complex 
{
  int real;
  int imag;
};

int main() 
{
 Complex c1, c2, sum, diff;

 c1.real = 4;
 c1.imag = 5;

 c2.real = 8;
 c2.imag = 9;

 sum.real = c1.real + c2.real;
 sum.imag = c1.imag + c2.imag;

 diff.real = c1.real - c2.real;
 diff.imag = c1.imag - c2.imag;

 cout << "First Complex Number: " << c1.real << " + " << c1.imag << "i" << endl;
 cout << "Second Complex Number: " << c2.real << " + " << c2.imag << "i" << endl;
    
 cout << "Addition: " << sum.real << " + " << sum.imag << "i" << endl;
 cout << "Subtraction: " << diff.real << " + " << diff.imag << "i" << endl;

    return 0;
}

