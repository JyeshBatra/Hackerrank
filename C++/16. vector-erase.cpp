// You are provided with a vector of N integers. Then, you are given 2 queries. For the first query, you are provided with 1 integer, which denotes a position in the vector. 
// The value at this position in the vector needs to be erased. The next query consists of 2 integers denoting a range of the positions in the vector. 
// The elements which fall under that range should be removed. The second query is performed on the updated vector which we get after performing the first query.
  
// Sample Input
// 6
// 1 4 6 2 8 9
// 2
// 2 4
// Sample Output
// 3
// 1 8 9

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> v;
    int n; cin>>n;
    for (int i=1; i<=n; i++){
        int a; cin>>a;
        v.push_back(a);
    };
    int x; cin>>x;
    v.erase(v.begin()+(x-1));
    int a,b,c;
    cin>>a>>b;
    v.erase(v.begin()+(a-1),v.begin()+(b-1));
    
    cout<<v.size()<<"\n";
    for (auto c:v){
        cout<<c<<" ";
    };
    return 0;
}
