#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }int k;
	    cin>>k;
	    
	    vector<int> v;
	    queue<int> list;
	    int i=0,j=0;
	    while(j<n){
	        if(arr[j]<0){
	            list.push(j);
	        }if(j-i+1==k){
	            if(list.empty())
	             v.push_back(0);
	             else
	             v.push_back(arr[list.front()]);
	             
	             i++;
	        }if(i>list.front()&&!list.empty())
	          list.pop();
	          
	          
	          j++;
	        
	    }
	    for(auto it:v)
	     cout<<it<<" ";

         cout<<endl;
	    
	}
	return 0;
}