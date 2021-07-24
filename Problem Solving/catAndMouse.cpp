// Two cats and a mouse are at various positions on a line. You will be given their starting positions. 
// Your task is to determine which cat will reach the mouse first, assuming the mouse does not move and the cats travel at equal speed. 
// If the cats arrive at the same time, the mouse will be allowed to move and it will escape while they fight.

// You are given q queries in the form of x, y, and z representing the respective positions for cats A and B, and for mouse C.
// If cat A catches the mouse first, print Cat A.
// If cat B catches the mouse first, print Cat B.
// If both cats reach the mouse at the same time, print Mouse C as the two cats fight and mouse escapes.
  
// Sample Input
// 2
// 1 2 3
// 1 3 2
// Sample Output
// Cat B
// Mouse C

#include <bits/stdc++.h>
using namespace std;

string catAndMouse(int x, int y, int z) {
    int A, B;
    A=abs(x-z);
    B=abs(y-z);
    if(A>B) return "Cat B";
    else if(B>A) return "Cat A";
    return "Mouse C";
}

int main()
{
    int q; cin>>q;
    while(q--){
        int x,y,z;
        cin>>x>>y>>z;
        string result=catAndMouse(x, y, z);
        cout<<result<<endl;
    }
    return 0;
}
