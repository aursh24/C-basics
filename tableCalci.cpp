#include <iostream>
#include <string>
using namespace std;
int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int mul(int a, int b)
{
    return a * b;
}
int divide(int a, int b)
{
    return a / b;
}
int table(int c)
{
    for (int i = 1; i <= 10; i++)
    {
        cout << c << "x" << i << "=" << c * i << endl;
    }
}

int main()
{
    int a, b, c;
    cout << "Enter the Number 1 : ";
    cin >> a;
    cout << " Enter Number 2 : ";
    cin >> b;
    char opr;
    cout << "Enter the Operation '+' '-' 'x' '/' 't' (For Multiplication Table)" << endl;
    cin >> opr;
    switch (opr)
    {
    case '+':
        add(a, b);
        cout << "Sum : " << add(a, b);
        break;
    case '-':
        sub(a, b);
        cout << "Difference : " << sub(a, b);
        break;
    case 'x':
        mul(a, b);
        cout << "Result : " << mul(a, b);
        break;
    case '/':
        divide(a, b);
        cout << "Result : " << divide(a, b);
        break;
    case 't':
        cout << "Enter the Number for it Multiplication Table : ";
        cin >> c;
        table(c);
        break;
    default:
        cout << "Invalid Operation" << endl;
    }
}