//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    vector<int> rearrangeQueue(queue<int> &q){
        queue<int> q1;
        queue<int> q2;
        int a = q.size() / 2;
        for(int i = 0; i < a; i++){
            int element = q.front();
            q.pop();
            q1.push(element);
        }
        while (!q.empty()) {
            int element = q.front();
            q.pop();
            q2.push(element);
        }
        
        vector<int> result;
        while (!q1.empty() || !q2.empty()) {
            if (!q1.empty()) {
                result.push_back(q1.front());
                q1.pop();
            }
            if (!q2.empty()) {
                result.push_back(q2.front());
                q2.pop();
            }
        }
        return result;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        queue<int> q;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            q.push(a);
        }
        Solution ob;
        vector<int> ans=ob.rearrangeQueue(q);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
// } Driver Code Ends