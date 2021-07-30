// Lily likes to play games with integers. She has created a new game where she determines the difference between a number and its reverse. For instance, given the number 12, its reverse is 21. 
// Their difference is 9. The number 120 reversed is 21, and their difference is 99. She decides to apply her game to decision making. She will look at a numbered range of days and will only go to a movie on a beautiful day.
// Given a range of numbered days, [i..j] and a number k, determine the number of days in the range that are beautiful. Beautiful numbers are defined as numbers where |i-reverse(i)| is evenly divisible by k. 
// If a day's value is a beautiful number, it is a beautiful day. Return the number of beautiful days in the range.
  
// Sample Input
// 20 23 6
// Sample Output
// 2

#include <bits/stdc++.h>
using namespace std;

int beautifulDays(int i, int j, int k) {
    int bdays=0;
    for(int x=i; x<=j; x++){
        int rev=0,rem=0,t=x;
        while(t!=0){
            rem=t%10;
            rev=rev*10+rem;
            t/=10;
        }
        if((abs(rev-x))%k==0)
            bdays++;
    }
    return bdays;
}

int main()
{
    int i, j, k;
    cin>>i>>j>>k;
    int result=beautifulDays(i, j, k);
    cout<<result;
    return 0;
}
