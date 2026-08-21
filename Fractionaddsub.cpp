#include <iostream>
using namespace std;

class Fraction {
private:
    int num, den;

public:
    Fraction(int n = 0, int d = 1) {
        num = n;
        den = d;
    }

    Fraction add(Fraction f) {
        return Fraction(num * f.den + f.num * den,
                        den * f.den);
    }

    Fraction subtract(Fraction f) {
        return Fraction(num * f.den - f.num * den,
                        den * f.den);
    }

    void display() {
        cout << num << "/" << den << endl;
    }
};

int main() {
    Fraction f1(3, 4);
    Fraction f2(1, 2);

    Fraction sum = f1.add(f2);
    Fraction diff = f1.subtract(f2);

    cout << "First Fraction: ";
    f1.display();

    cout << "Second Fraction: ";
    f2.display();

    cout << "Addition: ";
    sum.display();

    cout << "Subtraction: ";
    diff.display();

    return 0;
}
