#include <iostream>
using namespace std;

enum Meals
{   
    dinner,
    breakfast,
    lunch,
};

int main(){
    Meals m1 = dinner;
    if (dinner == 0)
    {
        cout << "The Value of dinner is " << dinner << endl;
    }
    return 0;
}