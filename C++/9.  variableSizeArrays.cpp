// Consider an n-element array, a, where each index i in the array contains a reference to an array of ki integers (where the value of ki varies from array to array). 
// Given a, you must answer q queries. Each query is in the format i j, where i denotes an index in array a and j denotes an index in the array located at a[i]. 
// For each query, find and print the value of element j in the array at location a[j] on a new line.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n,q,k;
    cin>>n>>q;
    vector<vector<int>> v1;
    for(int i=0; i<n; i++){
        cin>>k;
        vector<int> v2;
        for (int j=0; j<k; j++){
            int k1; cin>>k1;
            v2.push_back(k1);
        }; 
        v1.push_back(v2);
    };
    for (int i=0; i<q; i++){
        int a,b;
        cin>>a>>b;
        cout<<v1[a][b]<<endl;
    };
    
    return 0;
}
