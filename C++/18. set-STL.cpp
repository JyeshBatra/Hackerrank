// You will be given Q queries. Each query is of one of the following three types:
// 1 x : Add an element x to the set.
// 2 x : Delete an element x from the set. (If the number x is not present in the set, then do nothing).
// 3 x : If the number x is present in the set, then print "Yes"(without quotes) else print "No"(without quotes).
  
// Sample Input
// 8
// 1 9
// 1 6
// 1 10
// 1 4
// 3 6
// 3 14
// 2 6
// 3 6
// Sample Output
// Yes
// No
// No

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    set<int> s;
    // set<int>::iterator iter;
    int q, y, x; cin>>q;
    for(int i=0; i<q; i++){
        cin>>y>>x;
        switch(y){
            case 1:
                    s.insert(x);
                    continue;
            case 2:
                    s.erase(x);
                    continue;
            case 3:
                    set<int>::iterator iter=s.find(x);
                    if(*iter && iter!=s.end())
                        cout<<"Yes"<<endl;
                    else
                        cout<<"No"<<endl;
        }
    }
    return 0;
}
