//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends


vector<long long> printFirstNegativeInteger(long long int A[],long long int N, long long int K) {
                                                 deque<long long int> d;
                                                 vector<long long> ans;
                                                 //process negative elements into it
                                                 for(int i=0;i<K;i++){
                                                     if(A[i] <0){
                                                         d.push_back(i);
                                                     }
                                                 }
                                                 //store answerr for the first k-sized window
                                                 if(d.size()>0){
                                                     ans.push_back(A[(d.front())]);
                                                 }
                                                 else{
                                                     ans.push_back(0);
                                                 }
                                                 
                                                 //process for remmaing windows
                                                 for(int i=K;i<N;i++){
                                                     //removal
                                                     if(!d.empty() && i-d.front()>=K){
                                                         d.pop_front();
                                                     }
                                                     //addition
                                                     if(A[i]<0){
                                                         d.push_back(i);
                                                     }
                                                     if(d.size()>0){
                                                         ans.push_back(A[(d.front())]);
                                                     }
                                                     else{
                                                         ans.push_back(0);
                                                     }
                                                     
                                                 }
                                                 return ans;
                                                 
                                            
 }