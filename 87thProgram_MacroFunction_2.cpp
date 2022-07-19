#include<iostream>
using namespace std;
#define add(x,  y) x + y
int main()
{
    int a = 10, b = 20;
    cout << 4*add(a, b) << endl; // 4 * 10 = 40 + 20 = 60
    cout << 5*add(a, b) << endl; // 5* 10 = 50 + 20 = 70
    return 0;
}