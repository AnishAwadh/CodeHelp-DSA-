// given number is prime or not 

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter a number : "<<endl;
    cin>>n;

    int i=2;                         // because every number is divisable by 1
    int count=0;

    while (i<n){                 // because every number is divisable by itself , toh hume input se ek number pehle tak check karna hai                  
        if(n%i==0){
            count++;
            i++;
        }
        else if(n%i!=0){
            i++;
        }
    }
    if(count>0){
        cout<<"this is not a prime number "<<endl;
    }
    else{
        cout<<"this is a prime number"<<endl;
    }
}