// In this challenge, you will use a for loop to increment a variable through a range.

// Sample Input
// 8
// 11

// Sample Output
// eight
// nine
// even
// odd

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    string s[]={"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    for(int i=a; i<=b; i++){
        if (i<=9){
            cout<<s[i]<<"\n";    
        }
        else{
            if(i%2==0)
                cout<<"even"<<"\n";
            else 
                cout<<"odd"<<"\n";
        }
    }
    return 0;
}
