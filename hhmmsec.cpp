#include <iostream>
using namespace std;

class Time
{
    int h, m, s;

public:
    void accept()
    {
        cin >> h >> m >> s;
    }

    Time add(Time t)
    {
        Time r;

        r.s = s + t.s;
        r.m = m + t.m + r.s / 60;
        r.s = r.s % 60;

        r.h = h + t.h + r.m / 60;
        r.m = r.m % 60;

        return r;
    }

    void display()
    {
        cout << h << ":" << m << ":" << s;
    }
};

int main()
{
    Time t1, t2, result;

    cout << "Enter first time (HH MM SS): ";
    t1.accept();

    cout << "Enter second time (HH MM SS): ";
    t2.accept();

    result = t1.add(t2);

    cout << "Resultant time: ";
    result.display();

    return 0;
}
