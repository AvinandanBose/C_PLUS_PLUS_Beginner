#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a range:";
    cin >> n;
     cout << "Prime numbers upto" << n <<"are:" << "\n";
     int i = 2;
     cout <<i<< endl;
        do {
            bool t = true;
            int j = 2;
            do {
                if ( i % j == 0) {
                    t = false;
                }
                j++;
            } while ( j < i);
            if ( t == true) {
                cout << i << endl;
            }
            i++;
        } while ( i <= n);
}