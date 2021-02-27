// { Driver Code Starts
#include<iostream>
#include<stack>
using namespace std;
void push(stack<int>& s,int a);
bool isFull(stack<int>& s,int n);
bool isEmpty(stack<int>& s);
int pop(stack<int>& s);
int getMin(stack<int>& s);
//This is the STL stack (http://quiz.geeksforgeeks.org/stack-container-adaptors-the-c-standard-template-library-stl/).
stack<int> s;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a;
		cin>>n;
		while(!isEmpty(s)){
		    pop(s);
		}
		while(!isFull(s,n)){
			cin>>a;
			push(s,a);
		}
		cout<<getMin(s)<<endl;
	}
}// } Driver Code Ends

int count=0,min1;
void push(stack<int>& s, int a){
	// Your code goes here
	if(s.empty())
	 min1 = 0;
	if(count==0)
	 min1 = a;
	s.push(a);
	count++;
	if(a<min1)
	 min1 = a;
	
}

bool isFull(stack<int>& s,int n){
	// Your code goes here
	return (count==n);
	
}

bool isEmpty(stack<int>& s){
	// Your code goes here
	if(s.empty())
	 count=0;
	return (s.empty());
}

int pop(stack<int>& s){
	// Your code goes here
	s.pop();
}

int getMin(stack<int>& s){
	// Your code goes here
	return min1;
}