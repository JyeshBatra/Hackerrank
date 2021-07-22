// Input will contain two integers, a and b, separated by a newline.
// a'= a + b
// b'= |a - b|
 
// Sample Input
// 4
// 5

// Sample Output
// 9
// 1

#include<iostream>
#include <stdio.h>
#include <cstdlib>
using namespace std;

void update(int *p1,int *p2) {
    // Complete this function 
    int p,q;
    p=(*p1)+(*p2);
    q=(abs((*p1)-(*p2)));
    cout<<p<<"\n"<<q;
    return;
}

int main() {
    int a, b;
    cin>>a>>b;
    int *p1=&a; int *p2=&b;
    update(&a,&b);

    return 0;
}
