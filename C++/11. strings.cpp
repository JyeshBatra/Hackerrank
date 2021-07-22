// Input Format
// You are given two strings, a and b, separated by a new line. Each string will consist of lower case Latin characters ('a'-'z').

// Output Format
// In the first line print two space-separated integers, representing the length of a and b respectively.
// In the second line print the string produced by concatenating a and b(a+b).
// In the third line print two strings separated by a space, a' and b'. a' and b' are the same as  and , respectively, except that their first characters are swapped.

#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a,b;
    cin>>a>>b;
    
    cout<<a.size()<<" "<<b.size()<<"\n";
    cout<<(a+b)<<"\n";
    char t= b[0]; b[0]=a[0]; a[0]=t;
    cout<<a<<" "<<b;
    return 0;
}
