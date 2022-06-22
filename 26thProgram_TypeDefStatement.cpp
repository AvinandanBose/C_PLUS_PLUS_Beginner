/* typedef statement rename a datatype */

#include <iostream>
using namespace std;
int main() {
    typedef int Avinandan ; 
    typedef char Myname;
    typedef double price;
    typedef unsigned long ulong;
    ulong costing = 12;
    Avinandan age = 18;
    price Price = 19.50;
    Myname name[80] = "Avinandan";
    cout <<"age=" <<age << " " <<"name=" <<name << endl;
    cout <<"Price = " <<Price<< endl;
    cout <<"costing="<< costing<< endl;
    return 0;
}