// You will be given an array of N integers and you have to print the integers in the reverse order.
// Input Format - The first line of the input contains N, where N is the number of integers. The next line contains N space-separated integers.
// Output Format - Print the  integers of the array in the reverse order, space-separated on a single line.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    } 
    for (int i=n-1; i>=0; i--){
        cout<<arr[i]<<" ";
    }
    return 0;
}
