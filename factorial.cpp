#include<iostream>
using namespace std;


int factorial(int n){
    if(n<=1){
        return 1;
    }
    int f = 1;
    for(int i=1;i<=n;i++){
        f = f*i;
    }
    return f;
}

//this is iterative implementation
//time complexity - O(n)
// space and aux space complexity - O(1)

int factorial(int n){
    if(n==1){
        return 1;
    }
    return n*factorial(n-1);
}

//this is recursive implementation
//time complexity - O(n)
// space and aux complexity - O(1)

int main(){
    cout << factorial(5);
    return 0;
}