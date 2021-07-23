// A person wants to determine the most expensive computer keyboard and USB drive that can be purchased with a give budget. 
// Given price lists for keyboards and USB drives and a budget, find the cost to buy them. If it is not possible to buy both items, return -1.
  
// Input Format-
// The first line contains three space-separated integers b, n, and m, the budget, the number of keyboard models and the number of USB drive models.
// The second line contains n space-separated integers keyboards[i], the prices of each keyboard model.
// The third line contains m space-separated integers drives, the prices of the USB drives.
// Output Format-
// the maximum that can be spent, or -1 if it is not possible to buy both items.

// Sample Input 0
// 10 2 3
// 3 1
// 5 2 8
// Sample Output 0
// 9

#include <bits/stdc++.h>
using namespace std;

int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    int max=INT_MIN;
    for(auto i : keyboards){
        for(auto j : drives){
          if(i+j>max && i+j<=b){
              max=i+j;
          }
        }
    }
    if(max==INT_MIN) return -1;
    return max;
}

int main()
{
    int b, n, m;
    cin>>b>>n>>m;
    vector<int> keyboards, drives;
    while(n--){
        int keyboard; cin>>keyboard;
        keyboards.push_back(keyboard);
    }    
    while(m--){
        int drive; cin>>drive;
        drives.push_back(drive);
    }
    int result=getMoneySpent(keyboards,drives,b);
    cout<<result;
    return 0;
}

  
