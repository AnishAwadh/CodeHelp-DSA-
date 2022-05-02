#include <iostream>
using namespace std;

int main (){
    int a;
    cout<<"enter a number :"<<endl;
    cin>>a;

    if (a>0){
        cout<<"this number is positive "<<endl;
    }
    else if (a<0){
        cout<<"this number is negative "<<endl;
    }
    else{
        cout<<"this number is zero"<<endl;
    }
}