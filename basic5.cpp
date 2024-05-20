#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x = 5, y = 10;
    cout << "The value of x is " << x << " The value of y is " << y << endl;
    swap(x, y);
    cout << "The value of x is " << x << " The value if y is " << y << endl;
}