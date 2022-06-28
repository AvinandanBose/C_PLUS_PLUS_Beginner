#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a range:";
    cin >> n;
     cout << "Prime numbers upto" << n <<"are:" << "\n";
    for(int i=2;i<=n;i++){
        bool t = true;
        for(int j =2;j<i;j++){
            if(i%j==0){
                t = false;
            }
        }
        if(t == true){
            cout << i << endl;
        }
    }
    return 0;
}