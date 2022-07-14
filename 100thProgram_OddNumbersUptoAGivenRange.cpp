#include<iostream>
using namespace std;
int main()
{
    int range ;
    cout<<"Enter the range: ";
    cin>>range;
    cout<<"Odd numbers upto " <<range <<" are:" << "\n";
    for(int i =1;i<=range;i++){
        if(i%2!=0){
            cout<<i<<"\n ";
        }
    }
    return 0;
}