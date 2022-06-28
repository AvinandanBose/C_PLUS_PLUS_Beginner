#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a range:";
    cin >> n;
     cout << "Prime numbers upto" << n <<"are:" << "\n";
     int i = 2;
     while ( i <= n) {
         bool t = true;
         int j = 2;
         while ( j < i) {
             if ( i % j == 0) {
                 t = false;
             }
             j++;
         }
         if ( t == true) {
             cout << i << endl;
         }
         i++;
     }

    return 0;
}