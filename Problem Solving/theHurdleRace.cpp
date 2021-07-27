// A video player plays a game in which the character competes in a hurdle race. Hurdles are of varying heights, and the characters have a maximum height they can jump. 
// There is a magic potion they can take that will increase their maximum jump height by 1 unit for each dose. How many doses of the potion must the character take to be able to jump all of the hurdles. 
// If the character can already clear all of the hurdles, return 0.

// Sample Input 0
// 5 4
// 1 6 3 5 2
// Sample Output 0
// 2
  
// Sample Input 1
// 5 7
// 2 5 4 5 2
// Sample Output 1
// 0

#include <bits/stdc++.h>
using namespace std;

int hurdleRace(int k, vector<int> height) {
    int maxx=*max_element(height.begin(), height.end());
    if(maxx>k) 
        return maxx-k;
    else
        return 0;
}

int main()
{
    int n,k;
    cin>>n>>k;
    
    vector<int> hurdles(n);
    for(int i=0; i<n; i++){
        cin>>hurdles[i];
    }
    int result=hurdleRace(k, hurdles);
    cout<<result;
    return 0;
}
