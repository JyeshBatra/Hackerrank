// You are appointed as the assistant to a teacher in a school and she is correcting the answer sheets of the students.
// Each student can have multiple answer sheets.So the teacher has Q queries:

// 1 X Y :Add the marks Y to the student whose name is X.
// X : Erase the marks of the students whose name is X.
// X : Print the marks of the students whose name is X. (If X didn't get any marks print 0.)

// Sample Input
// 7
// 1 Jesse 20
// 1 Jess 12
// 1 Jess 18
// 3 Jess
// 3 Jesse
// 2 Jess
// 3 Jess
// Sample Output
// 30
// 20
// 0

#include <cmath>
#include <cstdio>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int Q, type, marks;
    cin>>Q;
    map<string,int> m; string name;
    for(int i=0; i<Q; i++){
        cin>>type>>name;
        if(type==1){
            cin>>marks;
            m[name]+=marks;
        }
        else if(type==2){
            m.erase(name);
        }
        else {
            cout<<m[name]<<endl;
        }
    }
    return 0;
}
