#include<iostream>
using namespace std;
int main(){
    int range ; 
    cout << "Enter the range : ";
    cin >> range;
        int firstTerm = 0;
          int secondTerm = 1;
          int thirdTerm;
    cout << "All non-fibonacci numbers upto" <<range << "are:" << "\n";
    for(int i =0; i<=range; i++){
          
         thirdTerm = firstTerm + secondTerm;
       
        
        for(int j= secondTerm+1 ; j< thirdTerm ; j++){
            cout << j << "\n";
        }
        firstTerm = secondTerm;
        secondTerm = thirdTerm;
    }
    
    return 0;
}