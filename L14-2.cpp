#include <iostream>
using namespace std;


long long int binarysearch(int n){
        int start = 0;
        int end = n;
        
        long long int mid = start + (end - start) / 2;
        long long int ans = -1;
        
        while(start <= end){
            if(mid*mid > n){
                end = mid - 1;
            }
            else if (mid*mid < n){
                ans = mid;
                start = mid + 1;
            }
            else if(mid*mid == n){
                return mid;
            }
            mid = start + (end - start)/2;
        }
        return ans;
    }
    

int main (){

    int x;
    cin >> x;
    cout << binarysearch(x) << endl;

}