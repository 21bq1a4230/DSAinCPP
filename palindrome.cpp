#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

// bool palindrome(int n){
//     int rev = 0;
//     int temp = n;
//     while (temp != 0){
//         int ld = temp%10;
//         temp = temp/10;
//         rev = (rev*10) + ld;
//     }
//     return (rev == n);
// }

// general used function for palindrome.
// time complexity - theta(n) where n is the number of digits
//space and auxilary space complexity - theta(1)

bool palindrome(int n){
    std::string str = std::to_string(n);
    std::reverse(str.begin(),str.end());
    int n2 = std::stoi(str);
    return(n == n2);
}

//this algo involves in converting string into int and vice versa.
// time complexity - O(log n)
//space and auxilary space complexity - theta(1)


int main(){
    cout<<palindrome(123321);
    return 0;
}
