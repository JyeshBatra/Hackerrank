// An integer d is a divisor of an integer n if the remainder of n%d=0.
// Given an integer, for each digit that makes up the integer determine whether it is a divisor. Count the number of divisors occurring within the integer.

// Input Format
// The first line is an integer, t, the number of test cases.
// The t subsequent lines each contain an integer, n.
// Output Format
// The number of digits in n that are divisors of n.

// Sample Input
// 2
// 12
// 1012
// Sample Output
// 2
// 3


#include <bits/stdc++.h>
using namespace std;

int findDigits(int n) {
    int t=n, r=0, c=0;
    while(t!=0){
        r=t%10;
        t/=10;
        if(r!=0 && n%r==0) c++;
    }
    return c;
}

int main()
{
    int t; cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<findDigits(n)<<endl;
    }
    return 0;
}
