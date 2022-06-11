#include <iostream>
using namespace std;

class D
{
public:
    int a, b;

    D(int x, int y)
    {
        a = x;
        b = y;
    }

    // Manually Create Copy Constuctor
    D(const D &temp)
    {
        a = temp.a + 1;
        b = temp.b + 1;
        cout << "Manually Create Constructor run: " << endl;
    }

    void print()
    {
        cout << " A: " << a << " B: " << b << endl;
    }
};

int main()
{
    // Normal Constructor
    D obj(10, 20);
    obj.print();

    // copy Constructor
    D obj1(obj);
    obj1.print();
}