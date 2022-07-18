#include<iostream>
using namespace std;
int countDigits(int);
int dividewithseven(int);
int buzz_count(int);

int main(){
    int range ;
    cout<<"Enter the range: ";
    cin>>range;
    cout<<"All buzz numbers in the "<< range<< "are: " << "\n";
    for(int i=1;i<=range;i++){
        if(dividewithseven(i) || buzz_count(i)){
            cout<< "Buzz Number : "<<i<<"\n";
        }
    }
}


int countDigits(int i)
{
    int s = 0;
    while (i != 0)
    {
        // a = a%10(is un-necessary just for showing mod op)
        i = i / 10;
        s = s + 1;
    }
    return s;
}

int dividewithseven(int p){
    if(p%7==0){
        return p;
    }
    return 0;
}

int buzz_count(int q){
    if(q%7!=0){
        int m;
        int c = countDigits(q);
        for(int i = c ; i<=c; i++){
            m = q%10;
            q = q/10;
        }
        if(m==7){
            return m;
        }

    }
    return 0;
}