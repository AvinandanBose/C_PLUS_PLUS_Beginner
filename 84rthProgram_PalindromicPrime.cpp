#include<iostream>
using namespace std;
int main(){
    int a;
    cout << "Enter a number:" << "\n";
    cin >>a;
    int s =0;
    int c ;
    int rev = 0;
    int temp = a;
    int temp1 =a;
    int m;
    while(a!=0){
        //a = a%10(is un-necessary just for showing mod op)
        a = a/10;
        s= s+1;
    }
    for(int i=1; i<=s ; i++){
        m =  temp % 10;
        rev = rev*10 + m;
        temp =  temp/10;
    }
    if(temp1==rev){
        c= 0;
        for(int j =2 ; j<= temp1/2; j++){
            if(temp1%j==0){
                c = c + 1;
                break;
            }
            
        }
        if(c==0){
                cout << temp1 <<" is prime palindromic!!" "\n";
            }
            else{
                cout << temp1 <<" is not prime palindromic!!" "\n";
            }
    }
       
    return 0;
}