// Given a string of comma delimited integers, return a vector of integers.
// stringstream ss("23,4,56");
// char ch;
// int a, b, c;
// ss >> a >> ch >> b >> ch >> c;  // a = 23, b = 4, c = 56

// Sample Input
// 23,4,56
// Sample Output
// 23
// 4
// 56

#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    stringstream ss(str);
    vector<int> vec;
    int t;
    char ch;
    while(ss>>t){
        vec.push_back(t);
        ss>>ch;
    }
    return vec;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
