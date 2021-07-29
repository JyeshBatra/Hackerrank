// The Utopian Tree goes through 2 cycles of growth every year. Each spring, it doubles in height. Each summer, its height increases by 1 meter.
// A Utopian Tree sapling with a height of 1 meter is planted at the onset of spring. How tall will the tree be after n growth cycles?
  
// Input Format-
// The first line contains an integer, t, the number of test cases.
// t subsequent lines each contain an integer, n, the number of cycles for that test case.
// Output Format-
// The height of the tree after the given number of cycles.
  
// Sample Input
// 3
// 0
// 1
// 4
// Sample Output
// 1
// 2
// 7

#include <bits/stdc++.h>
using namespace std;

int utopianTree(int n) {
    int tall=1;
    if(n==0) return tall;
    
    for(int i=1; i<=n; i++){
        if(i%2!=0)
            tall*=2;
        else
            tall++;
    }
    return tall;
}

int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int result=utopianTree(n);
        cout<<result<<endl;
    }
    return 0;
}
