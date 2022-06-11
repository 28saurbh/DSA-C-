#include <iostream>
using namespace std;
class box
{
private:
    int length;
    int breadth;
    int height;
    string name;

public:
    void set_values(int a, int b, int c, string name)
    {
        length = a;
        breadth = b;
        height = c;
        this -> name = name;
    }
    void show_data()
    {
        cout << "Length = " << length << endl
             << "Breadth = " << breadth << endl
             << "Height = " << height << endl
             << "name = " << name << endl;
        cout << "Length = " << &length << endl
             << "Breadth = " << &breadth << endl
             << "Height = " << &height << endl 
             << "name = " << &name << endl <<endl;
    }
};
int main()
{
    box B1, B3;
    // Set dimensions of Box B1
    B1.set_values(5, 10, 15, "sourabh");
    B1.show_data();
    /* When copying the data of object at the time of initialization
     then copy is made through COPY CONSTRUCTOR */
    box B2 = B1;
    B2.set_values(1, 2, 3, "c");
    B2.show_data();
    B1.show_data();
    /* When copying the data of object after initialization then the
     copy is done through DEFAULT ASSIGNMENT OPERATOR */
    B3 = B2;
    B3.show_data();
    return 0;
}