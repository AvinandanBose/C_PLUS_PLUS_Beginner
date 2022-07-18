#include<iostream>
using namespace std;
#define add(x,  y) (x + y)
int main()
{
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << "Sum of " << x << " and " << y << " is " << add(x, y);
    return 0;
}
