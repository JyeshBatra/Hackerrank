// You have two strings of lowercase English letters. You can perform two types of operations on the first string:
// 1. Append a lowercase English letter to the end of the string.
// 2. Delete the last character of the string. Performing this operation on an empty string results in an empty string.
// Given an integer, k, and two strings, s and t, determine whether or not you can convert s to t by performing exactly k of the above operations on s. If it's possible, print Yes. Otherwise, print No.

// Input Format
// The first line contains a string , the initial string.
// The second line contains a string , the desired final string.
// The third line contains an integer , the number of operations.
  
// Sample Input 0
// hackerhappy
// hackerrank
// 9
// Sample Output 0
// Yes

// Sample Input 1
// aba
// aba
// 7
// Sample Output 1
// Yes

// Sample Input 2
// ashley
// ash
// 2
// Sample Output 2
// No

#include <bits/stdc++.h>
using namespace std;

string appendAndDelete(string s, string t, int k) {
    int c=0, len_s=s.length(), len_t=t.length();
    int n=(len_s>len_t ? len_t : len_s);
    
    for(int i=0; i<n; i++){
        if(s[i]==t[i]) c++;
        else break;
    }
    
    if(len_s+len_t<=k) return "Yes";

    else if((len_s-c)+(len_t-c)>k) return "No";
    
    else if(((len_s-c)+(len_t-c))%2==k%2) return "Yes";
    
    return "No";
}

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int k; cin>>k;
    
    string res=appendAndDelete(s1, s2, k);
    cout<<res;

    return 0;
}
