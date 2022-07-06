/****************************************************************
 * Composite Numbers: Numbers formed by Multiplying two unique or more Prime Numbers.
 * ********************************/
#include<iostream>
using namespace std;                                                                
int main(){
    int range;
    cout<< "Enter a range:"  ;
    cin >> range;
    int k;
    if(range>=4){
        cout<<"Composite Numbers upto range:"<<range<<" are:"<<"\n";
    for (int i =2 ; i<=range;i++ ){
        k=0;
        for(int j=2;j<=i/j;j++){
            if(i%j ==0){
                k= k + 1;
                break;
            }
        }
        if(k==1){
            cout<<i << "\n";
        }
    }
    }
    else{
        cout<< "Invalid range!!!1,2,3 are not Composite Numbers,Please use range >= 4";
    }
    return 0;
}