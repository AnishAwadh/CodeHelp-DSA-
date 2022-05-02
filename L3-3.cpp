// print wheather uppercase , lowercase or not an alphabet

#include<iostream>
using namespace std;

int main() {
    char ch;
    cout<<"enter a character : "<<endl;
    cin>>ch;

    if(ch>='A' && ch<='Z'){
        cout<<"this is uppercase alphabets"<<endl;
    }
    else if (ch>='a' && ch<='z'){
        cout<<"this is smallcase alphabets"<<endl;
    }
    else{
        cout<<"this is not an alphabet"<<endl;
    }
}