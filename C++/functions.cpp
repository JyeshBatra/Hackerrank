// Write a function int max_of_four(int a, int b, int c, int d) which returns the maximum of the four arguments it receives.

// Input Format - Input will contain four integers -  a,b,c,d, one per line.
// Output Format - Return the greatest of the four integers.

#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d){
    if (a>b && a>c && a>d)
        return a;
    else if (b>c && b>d)
        return b;
    else if (c>d)
        return c;
    else
        return d;
};

int main() {
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    cout<<max_of_four(a,b,c,d);
    return 0;
}
