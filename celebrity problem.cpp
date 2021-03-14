
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution {
    public:
    int celebrity(vector<vector<int> >& M, int n) {
        // code here 
        stack<int> s;
       
        for(int i=0;i<n;i++)
          s.push(i);
          
         while(!s.empty()){
              if(s.size()==1)
                   break;
             int i1, i2;
             i1 = s.top();
             s.pop();
             i2 = s.top();
             s.pop();
             if(M[i1][i2]==1&&M[i2][i1]==1)
               continue;
             if(M[i1][i2]==1&&M[i2][i1]==0){
                 s.push(i2);
                 continue;
             }if(M[i1][i2]==0&&M[i2][i1]==1){
                 s.push(i1);
                 continue;
             }if(M[i1][i2]==0&&M[i2][i1]==0){
                 continue;
             }
         }int pot= s.top();
         for(int i=0;i<n;i++){
             if(i!=pot){
                 if(M[i][pot]==0||M[pot][i]==1)
                  return -1;
             }
         }
         
         
         return pot;
          
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}
  // } Driver Code Ends