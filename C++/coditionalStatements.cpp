// Given a positive integer n, do the following:

// If 1<=n<=9, print the lowercase English word corresponding to the number (e.g., one for 1, two for 2, etc.).
// If n>9, print Greater than 9.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string arr[]={"Greater than 9","one","two","three","four","five","six","seven","eight","nine"};
    cout<<(n>9?arr[0]:arr[n]);
    return 0;
}
