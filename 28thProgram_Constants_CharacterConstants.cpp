#include<iostream>
using namespace std;
int main(){
    char a[100]={'a', 'b', 'c', 'd', 'e','\0'}; // '\0' is end of character
    char b[4][3]= {{'a','b','c'},{'g','h','i'},{'j','k','l'},{'m','n','o'}}; //two dimesional character constant
    cout<<a<<"\n";
   for (int i =0 ; i<4;i++){
    for (int j = 0 ; j<3; j++){
            cout<<b[i][j]<<endl;
    }
    
   }
return 0;
}
