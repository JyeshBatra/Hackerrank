// Given an array of integers, find the longest subarray where the absolute difference between any two elements is less than or equal to 1.
// Input Format
// The first line contains a single integer n, the size of the array a.
// The second line contains n space-separated integers, each an a[i].
// Output Format
// The length of the longest subarray that meets the criterion.
  
// Sample Input 0
// 6
// 4 6 5 3 3 1
// Sample Output 0
// 3

O(n^2) approach
-------------------------------------------------------------------
#include <bits/stdc++.h>
using namespace std;

int pickingNumbers(vector<int> a) {
    int ans=0;
    for(auto i : a){
        int c=0;
        for(auto j : a){
            if(i-j==0 || i-j==1)
                c++;
        }
        if(c>ans)
            ans=c;
    }
    return ans;
}

int main()
{
    int n; cin>>n;
    vector<int> num(n);
    for(int i=0; i<n; i++){
        cin>>num[i];
    }
    int result=pickingNumbers(num);
    cout<<result;
    return 0;
}

O(n) approach { not mine just found on discussions forum)
-------------------------------------------------------------------
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
   int n,k,max = 0;
    cin>>n;
    int a[100]={0};
    for(int i = 0;i<n;i++){
        cin>>k;
        a[k]++;
    }
    for(int i = 0;i<n-1;i++){
        if(a[i]+a[i+1]> max) max = a[i]+a[i+1];
    }
    cout<<max;
    return 0;
}
