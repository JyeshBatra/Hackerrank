// Your local library needs your help! Given the expected and actual return dates for a library book, create a program that calculates the fine (if any). The fee structure is as follows:

// If the book is returned on or before the expected return date, no fine will be charged (i.e.: fine=0).
// If the book is returned after the expected return day but still within the same calendar month and year as the expected return date, fine = 15 Hackos*(No. of days).
// If the book is returned after the expected return month but still within the same calendar year as the expected return date, the fine = 500 Hackos*(No. of months).
// If the book is returned after the calendar year in which it was expected, there is a fixed fine of 10000 Hackos.
// Charges are based only on the least precise measure of lateness. For example, whether a book is due January 1, 2017 or December 31, 2017, if it is returned January 1, 2018, that is a year late and the fine would be 10000 Hackos.
  
// Input Format-
// The first line contains 3 space-separated integers, d1, m1, y1, denoting the respective day, month, and year on which the book was returned.
// The second line contains 3 space-separated integers, d2, m2, y2, denoting the respective , day, month and year on which the book was due to be returned.
// Output Format-
// The amount of fine or 0 if none.

// Sample Input
// 9 6 2015
// 6 6 2015
// Sample Output
// 45

#include <bits/stdc++.h>
using namespace std;

int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2) 
{    
    if((d1<=d2 && m1==m2 && y1==y2) || (m1<m2 && y1==y2) || y1<y2)
        return 0;
    else if(d1!=d2 && m1==m2 && y1==y2)
        return 15*abs(d1-d2);
    else if(d1!=d2 && m1!=m2 && y1==y2)
        return 500*abs(m1-m2);
    else 
        return 10000;
}

int main()
{
    int d1,m1,y1,d2,m2,y2;
    cin>>d1>>m1>>y1;
    cin>>d2>>m2>>y2;
    
    int res=libraryFine(d1, m1, y1, d2, m2, y2);
    cout<<res<<endl;
    return 0;
}
