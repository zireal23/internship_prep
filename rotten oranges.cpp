
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
struct queue{
    int time;
    int x,y;
    struct queue* next;
    
};
struct queue *front=0, *rear=0,*temp,*curr;

    int orangesRotting(vector<vector<int>>& grid) {
        // Code here
        int row = grid.size();
        int count=0;
        for(int i=0;i<row;i++){
            for(int j =0;j<grid[i].size();j++){
                if(grid[i][j]==2){
                    temp = (struct queue*)malloc(sizeof(struct queue));
                    temp->time = 0;
                    temp->x = i;
                    temp->y = j;
                    if(front ==0 && rear == 0){
                      front = temp;
                      rear = temp;
                    }
                    else
                      rear->next = temp;
                      
                     rear = temp;
                        
                }
        }rear->next=0;
        
    }
    temp = front;
    while(front!=rear){
        if(front->x+1==1){
            curr = (struct queue*)malloc(sizeof(queue));
            curr->time = front->time+1;
            curr->x = front->x+1;
            curr->y = front->y;
            rear->next = curr;
            rear = curr;
            front = front->next;
            
        }if(front->x-1==1){
            curr = (struct queue*)malloc(sizeof(queue));
            curr->time = front->time+1;
            curr->x = front->x-1;
            curr->y = front->y;
            rear->next = curr;
            rear = curr;
            front = front->next;
            
        }if(front->y+1==1){
            curr = (struct queue*)malloc(sizeof(queue));
            curr->time = front->time+1;
            curr->x = front->x;
            curr->y = front->y+1;
            rear->next = curr;
            rear = curr;
            front = front->next;
            
        }if(front->y-1==1){
            curr = (struct queue*)malloc(sizeof(queue));
            curr->time = front->time+1;
            curr->x = front->x;
            curr->y = front->y-1;
            rear->next = curr;
            rear = curr;
            front = front->next;
            
        }else
          front = front->next;
    }
    return rear->time;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends