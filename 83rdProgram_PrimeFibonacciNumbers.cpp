#include<iostream>
using namespace std;
int main(){
    int range ;
    cout << "Enter the range : ";
    cin >> range;
    int firstTerm = 0;
    int secondTerm = 1;
    for (int i=1; i<=range;i++){
        int thirdTerm = firstTerm + secondTerm;
        int s =0;
        for(int j=2; j<=thirdTerm/2; j++){
            if(thirdTerm%j==0){
                s = s + 1;
                break;
            }
        }
        if(s==0){
            cout << thirdTerm << "\n";
        }
        firstTerm = secondTerm;
        secondTerm = thirdTerm;
    }
    return 0;
}
