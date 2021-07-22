// You are given N integers in sorted order. Also, you are given Q queries. In each query, you will be given an integer and you have to tell whether that integer is present in the array. 
// If so, you have to tell at which index it is present and if it is not present, you have to tell the index at which the smallest integer that is just greater than the given number is present.

// Sample Input
//  8
//  1 1 2 2 6 9 9 15
//  4
//  1
//  4
//  9
//  15
// Sample Output
//  Yes 1
//  No 5
//  Yes 6
//  Yes 8

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {  
    int N, Q, num1, num2;
    cin>>N;
    vector<int> vec;
    // vector<int>:: iterator iter;
    // for(iter=vec.begin(); iter!=vec.end(); iter++)
    for(int i=0; i<N; i++){
        cin>>num1;
        vec.push_back(num1);
    } 
    cin>>Q;
    for(int i=0; i<Q; i++){
        cin>>num2;
        vector<int>::iterator low = lower_bound(vec.begin(), vec.end(), num2);
       if (vec[low - vec.begin()] == num2)
           cout << "Yes " << (low - vec.begin()+1) << endl;
       else
           cout << "No " << (low - vec.begin()+1) << endl;
            
        }
        
    return 0;
}
