#include<iostream>
int counter = 50;
int main() {
    using namespace std;
    register int counter; // register keyword is used to declare a variable in (CPU's)register.
    for(counter=1; counter<=10; counter++) {
        cout << "Counter = " << ::counter/counter << "\n";
    }
    return 0;
}
