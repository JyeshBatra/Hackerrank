// HackerLand Enterprise is adopting a new viral advertising strategy. When they launch a new product, they advertise it to exactly 5 people on social media.
// On the first day, half of those 5 people (i.e., floor(5/2)=2 like the advertisement and each shares it with  of their friends. At the beginning of the second day, floor(5/2) x 3 = 2 x3 = 6 people receive the advertisement.
// Each day, floor(recipients/2) of the recipients like the advertisement and will share it with  friends on the following day. 
// Assuming nobody receives the advertisement twice, determine how many people have liked the ad by the end of a given day, beginning with launch day as day 1.
                                        
// Sample Input
// 3
// Sample Output
// 9

#include <bits/stdc++.h>
using namespace std;

int viralAdvertising(int n) {
    int a=5, cSum=0;
    for(int i=0; i<n; i++){
        a=floor(a/2);
        cSum+=a;
        a*=3;
    }
    return cSum;
}

int main()
{
    int n; cin>>n;
    int result=viralAdvertising(n);
    cout<<result;
    return 0;
}
