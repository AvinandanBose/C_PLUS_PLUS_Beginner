#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
/****************************************************************
 * Output:
 * if rows = 5
 * then i will be 1 to 5
 * when i = 1, j = 1 to 1
 * print *
 * when i = 2, j = 1 to 2
 * print * *
 * when i = 3, j = 1 to 3
 * print * * *
 * when i = 4, j = 1 to 4
 * print * * * *
 * when i = 5, j = 1 to 5
 * print * * * * * 
 * ****************************************************************/