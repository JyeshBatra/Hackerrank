// A teacher asks the class to open their books to a page number. A student can either start turning pages from the front of the book or from the back of the book. 
// They always turn pages one at a time. When they open the book, page 1 is always on the right side:

// When they flip page 1, they see pages 2 and 3. Each page except the last page will always be printed on both sides. The last page may only be printed on the front, given the length of the book. 
// If the book is n pages long, and a student wants to turn to page p, what is the minimum number of pages to turn? They can start at the beginning or the end of the book.
// Given n and p, find and print the minimum number of pages that must be turned in order to arrive at page p.
  
// Sample Input 0
// 6
// 2
// Sample Output 0
// 1
  
// Sample Input 1
// 5
// 4
// Sample Output 1
// 0

#include <bits/stdc++.h>
using namespace std;

int pageCount(int n, int p) {
    if(p==n || p==1)
        return 0;
    
    vector<int> book(n);
    int min_page=0;
    for(int i=0; i<n; i++){
        book[i]=i+1;
    }
    int c=0;
    for(int i=0; i<n; i++){
        if(book[i]==p){
            c=(i+1)/2;
            break;
        }
    }
    int d=0;
    if(n%2==0){
        for(int i=n-1; i>=0; i--){
            if(book[i]==p){
               d=(n-i)/2;
               break;
            }
        }
    }
    else{
        for(int i=n-1; i>=0; i--){
            if(book[i]==p){
               d=((n-i)-1)/2;
               break;
            }
        }
    }
    min_page=min(c,d);
    return min_page;
}

int main()
{
    int n, p;
    cin>>n; cin>>p;
    int result=pageCount(n,p);
    cout<<result;
    
    return 0;
}
