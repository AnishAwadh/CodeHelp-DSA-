// RECURSION
// Fibbonacci series

#include<iostream> 
using namespace std;

int fib(int n) {

    if(n <= 1)  //base case
        return n;

    return fib(n - 1) + fib(n - 2); // recurrence relation
}

int main() {




    return 0;
}