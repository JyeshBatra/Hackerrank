// A Discrete Mathematics professor has a class of students. Frustrated with their lack of discipline, the professor decides to cancel class if fewer than some number of students are present when class starts. Arrival times go from on time (arrivalTime<=0) to arrived late (arrivalTime>0).
// Given the arrival time of each student and a threshhold number of attendees, determine if the class is cancelled.
  
// Input Format-
// The first line of input contains t, the number of test cases.
// Each test case consists of two lines.
// The first line has two space-separated integers, n and k, the number of students (size of a) and the cancellation threshold.
// The second line contains n space-separated integers (a[1], a[2],....,a[n]) that describe the arrival times for each student.
// Output Format-
// either YES or NO

// Sample Input
// 2
// 4 3
// -1 -3 4 2
// 4 2
// 0 -1 2 1
// Sample Output
// YES
// NO

#include <bits/stdc++.h>
using namespace std;

string angryProfessor(int k, vector<int> a) {
    int c=0;
    for(auto i : a){
        if(i<=0) c++;
    }
    if(c<k) return "YES";
    else return "NO"; 
}

int main()
{
    int t; cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        string result=angryProfessor(k,a);
        cout<<result<<endl;
    }
    return 0;
}
