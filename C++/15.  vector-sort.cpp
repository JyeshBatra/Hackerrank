// You are given N integers. Sort the N integers and print the sorted order.
// Store the N integers in a vector. Vectors are sequence containers representing arrays that can change in size.

// Sample Input
// 5
// 1 6 10 8 4
// Sample Output
// 1 4 6 8 10

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {  
    int n,a;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    for(auto x:v){
        cout<<x<<" ";
    }
    return 0;
}
