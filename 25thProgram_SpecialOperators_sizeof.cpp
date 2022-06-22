/* sizeof() operator returns size of  a data type  */

#include <iostream>
#include <string.h>
using namespace std;


int main(){
    int age = 18;
    double price = 100.15d;
    float weight = 1200.15f;
    string name = "Avinandan";
    char myname = 'A';
    cout << sizeof(age) << endl;
    cout << sizeof(name) << endl;
    cout << sizeof(myname) << endl;
    cout << sizeof(price) << endl;
    cout << sizeof(weight) << endl;
    return 0;
}