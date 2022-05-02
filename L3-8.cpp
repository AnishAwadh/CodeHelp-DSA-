//                   ****                      rows = 4 ; coloumns = 4
//                   ****
//                   ****
//                   ****
//   print this pattern

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the limit : "<<endl;
    cin>>n;

    int rows = 1;

    while (rows<=n){
        int coloumns = 1;

        while(coloumns<=n){
            cout<<"*";
            coloumns++;
        }
        cout<<endl;
        rows++;       
    }
}