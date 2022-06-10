#include <iostream>
int num = 20;
int main() {
    using namespace std;                                  
    int num = 10;
    cout << "Local =" << num << "\n";
    cout << "Global =" << ::num << "\n";
    cout << "Global+Local=" << ::num+num << "\n";
}