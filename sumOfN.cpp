#include<iostream>
using namespace std;
int sum = 0;

int sumOfN(int n){
    if(n == 0){
        return sum;
    }
    else{
        sum+=n;
        sumOfN(n-1);
    }
    return sum;
}

//this is recursive method to find sum of n natural numbers.
//time complexity - theta(n)
//space complexity - theta(1)
//auxilary space complexity - theta(1)

int sumOfN(int n){
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}

// this is a standard way of finding the sum of n Natural numbers 
// time complexity - theta(n)
// space complexity && auxilary space complexity - theta(1)

int sumOfN( int n){
    return (n*(n+1))/2;
}

// this is the most efficient way to find the sum of n natural numbers.
// time complexity - theta(1)
// space complexity && auxilary space complexity - theta(1)


int main(){
    time_t start,end;
    time(&start);
    int s = sumOfN(100000);
    time(&end);
    cout <<s;
    cout<<"time taken"<<end-start;
}