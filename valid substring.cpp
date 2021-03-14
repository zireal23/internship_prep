#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for c++
class Solution {
  public:
    int findMaxLen(string s) {
        stack<char> st;
        int currmax=0,maxlen=0;
    for(char c : s){
        if(c == '('|| c == '{' || c == '['){
            st.push(c);
        }else{
            if(st.empty()) {currmax=0;continue;}
            if(c == ')' && st.top() == '(') {st.pop();currmax+=2;continue;}
            if(c == '}' && st.top() == '{') {st.pop();currmax+=2;continue;}
            if(c == ']' && st.top() == '[') {st.pop();currmax+=2;continue;}
            maxlen = max(currmax, maxlen);
            currmax = 0;
        }
        
    }maxlen = max(currmax, maxlen);
    if(!st.empty())
    maxlen-=2;
    return maxlen;
    }
    
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S; 
        Solution ob;
        cout << ob.findMaxLen(S) << endl;
    }
    return 0;
}
  // } Driver Code Ends