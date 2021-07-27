// When a contiguous block of text is selected in a PDF viewer, the selection is highlighted with a blue rectangle. In this PDF viewer, each word is highlighted independently. For example:

// There is a list of 26 character heights aligned by index to their letters. For example, 'a' is at index 0 and 'z' is at index 25. 
// There will also be a string. Using the letter heights given, determine the area of the rectangle highlight in mm^2 assuming all letters are 1mm wide.
  
// Input Format-
// The first line contains 26 space-separated integers describing the respective heights of each consecutive lowercase English letter, ascii[a-z].
// The second line contains a single word consisting of lowercase English alphabetic letters.
// Output Format-
// The size of the highlighted area.
  
// Sample Input
// 1 3 1 3 1 4 1 3 2 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5
// abc
// Sample Output
// 9

#include <bits/stdc++.h>
using namespace std;


int designerPdfViewer(vector<int> h, string word) {
    int max_val=0;
    for(auto i : word){
        if(h[int(i)-(int('a'))]>max_val)
            max_val=h[int(i)-(int('a'))];
    }
    int len=word.size();
    return max_val*len;
}

int main()
{   
    vector<int> letters(26);
    for(int i=0; i<26; i++){
        cin>>letters[i];
    }
    string s;
    cin>>s;
    int result=designerPdfViewer(letters, s);
    cout<<result;
    
    return 0;
}
