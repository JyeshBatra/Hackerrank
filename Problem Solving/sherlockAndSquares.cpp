// Watson likes to challenge Sherlock's math ability. He will provide a starting and ending value that describe a range of integers, inclusive of the endpoints. 
// Sherlock must determine the number of square integers within that range.
  
// Input Format-
// The first line contains q, the number of test cases.
// Each of the next q lines contains two space-separated integers, a and b, the starting and ending integers in the ranges.
  
// Sample Input
// 2
// 3 9
// 17 24
// Sample Output
// 2
// 0

#include <bits/stdc++.h>
using namespace std;

int squares(int a, int b) {
    int a1=floor(sqrt(a));
    int b1=floor(sqrt(b));
    if(a1*a1==a) 
        return b1-a1+1;
    return b1-a1;
}

int main()
{
    int t; cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int res=squares(a, b);
        cout<<res<<endl;
    }
}
