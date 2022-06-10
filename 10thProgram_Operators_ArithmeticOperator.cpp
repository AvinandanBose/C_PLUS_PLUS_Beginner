#include<iostream>
int main(){
    using namespace std;
    //Integer Arithmetic Operators
    int x = 5;
    int y = 10;
    int c = x * y;
    int d = x+y;
    int e = y - x;
    int f = y / x;
    int g = y % x;
    cout << "c = " << c << "\n";
    cout << "d = " << d << "\n";    
    cout << "e = " << e << "\n";
    cout << "f = " << f << "\n";
    cout << "g = " << g << "\n";
    //Floating Point Arithmetic Operators
    float a = 14.5;
    float b = 10.5;
    float c1 = a * b;
    float d1 = a+b;
    float e1 = b - a;
    float f1 = b / a;
    cout << "c1 = " << c1 << "\n";
    cout << "d1 = " << d1 << "\n";
    cout << "e1 = " << e1 << "\n";
    cout << "f1 = " << f1 << "\n";
    //Mixed mode Arithmetic
    int h = 5;
    float i = 10.5;
    int j = h + i;
    float k = h - i;
    float l = h * i;
    float m = h / i;
    cout << "j = " << j << "\n";
    cout << "k = " << k << "\n";
    cout << "l = " << l << "\n";
    cout << "m = " << m << "\n";

    return 0;
}