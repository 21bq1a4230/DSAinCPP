#include<iostream>
#include<string>
using namespace std;

int countDigits(int n){
    int count =0;
    while(n>0){
        count+=1;
        n = n/10;
    }
    return count;
}

//this function has theta(n) time complexity and theta(1) space and auxilary space complexity

int countDigits(int n){
    std::string str = std::to_string(n);
    return str.length();
}

// in this function , there involves convertion of integer to string and find the length of the string.
//time complexity - O(logn) (convertion of int to str takes time of O(log n) because cpp uses some optimized methods to do it and finding the length takes O(1))
//space complexity - O(1)

int main(){
    cout<<countDigits(1234556);
    return 0;
}