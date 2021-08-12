// A child is playing a cloud hopping game. In this game, there are sequentially numbered clouds that can be thunderheads or cumulus clouds. The character must jump from cloud to cloud until it reaches the start again.
// There is an array of clouds, c and an energy level e=100. The character starts from c[0] and uses 1 unit of energy to make a jump of size k to cloud c[(i+k)%n]. If it lands on a thundercloud, c[i]=1, its energy (e) decreases by 2 additional units. 
// The game ends when the character lands back on cloud 0. Given the values of n, k, and the configuration of the clouds as an array c, determine the final value of e after the game ends.
  
// Sample Input
// STDIN             Function
// -----             --------
// 8 2               n = 8, k = 2
// 0 0 1 0 0 1 1 0   c = [0, 0, 1, 0, 0, 1, 1, 0]

// Sample Output
// 92

#include <bits/stdc++.h>
using namespace std;

int jumpingOnClouds(vector<int> c, int k) {
    int e=100;
    int n=c.size();
    int i=0;
    while(true){
        if(c[i%n]==1) e-=2;
        e--;
        i+=k;
        if(i%n==0) break;
    }
    return e;
}

int main()
{
    int n,k; cin>>n>>k;
    vector<int> clouds(n);
    for(int i=0; i<n; i++){
        cin>>clouds[i];
    }
    int results=jumpingOnClouds(clouds, k);
    cout<<results;
    return 0;
}
