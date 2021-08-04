// A jail has a number of prisoners and a number of treats to pass out to them. Their jailer decides the fairest way to divide the treats is to seat the prisoners around a circular table in sequentially numbered chairs. 
// A chair number will be drawn from a hat. Beginning with the prisoner in that chair, one candy will be handed to each prisoner sequentially around the table until all have been distributed.
// The jailer is playing a little joke, though. The last piece of candy looks like all the others, but it tastes awful. Determine the chair number occupied by the prisoner who will receive that candy.
  
// Input Format
// The first line contains an integer, t, the number of test cases.
// The next t lines each contain 3 space-separated integers:
// n : the number of prisoners
// m : the number of sweets
// s : the chair number to start passing out treats at
// Output Format
// The chair number of the prisoner to warn.
  
// Sample Input 0
// 2
// 5 2 1
// 5 2 2
// Sample Output 0
// 2
// 3
  
// Sample Input 1
// 2
// 7 19 2
// 3 7 3
// Sample Output 1
// 6
// 3

#include <bits/stdc++.h>
using namespace std;

int saveThePrisoner(int n, int m, int s) {
    int ans=0;
    if(m%n==0)
        return ((s-1)+n)>n ? ((s-1)+n)%n : (s-1)+n;
    else
        ans=(s-1)+(m%n);
    return ans>n ? ans%n : ans;
}

int main()
{
    int t; cin>>t;
    while(t--){
        int n, m ,s;
        cin>>n>>m>>s;
        int result=saveThePrisoner(n, m, s);
        cout<<result<<endl;
    }
    return 0;
}
