// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return if the paranthesis are balanced or not
bool ispar(string x)
{
    
     stack<char> s;
    for(int i=0;i<x.length();i++){
        if(i==0)      
         s.push(x[i]);
        else{
            if(s.empty()==true){
                if(x[i]=='('||x[i]=='['||x[i]=='{'){
                    s.push(x[i]);
                    continue;
                }else
                 return false;
            }
            
            if(x[i]==')'||x[i]==']'||x[i]=='}'){
                if(s.top()=='('&&x[i]==')'){
                   s.pop();
                   continue;
                }
                if(s.top()=='['&&x[i]==']'){
                   s.pop();
                   continue;
                }
                if(s.top()=='{'&&x[i]=='}'){
                   s.pop();
                   continue;
            }
                else
                   return false;
            }else
              s.push(x[i]);
        }
    }
    return (s.empty());
    
}


// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       if(ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends