#include<iostream>
using namespace std;
#define PI 3.1416
#define Area(r) (PI*r*r)
int main()
{
    int radius;
    cout << "Enter radius: ";
    cin >> radius;
    cout << "Area of circle with radius " << radius << " is " << Area(radius);                                      
    return 0;
}