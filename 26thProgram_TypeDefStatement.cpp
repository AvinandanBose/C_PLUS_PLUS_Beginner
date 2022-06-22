/* typedef statement rename a datatype */

#include <iostream>
using namespace std;
int main() {
    typedef int Avinandan ; 
    typedef char Myname;
    typedef double price;
    Avinandan age = 18;
    price Price = 19.50;
    Myname name[80] = "Avinandan";
    cout << age << " " << name << endl;
    cout << Price<< endl;
    return 0;
}