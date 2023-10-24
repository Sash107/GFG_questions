//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int pat1(vector<int> &res,int N,int i){
        if(res[i-1]<=0){
            res[i]=res[i-1]+5;
            return i;
        }
        res.push_back(res[i-1]-5);
        i++;
        pat1(res,N,i);
    }
    void pat2(vector<int> &res,int N, int i){
        if(res[i-1]==N){
            return;
        }
        res.push_back(res[i-1]+5);
        i++;
        pat2(res,N,i);
    }
    vector<int> pattern(int N){
        int i;
        vector<int> res;
        res.push_back(N);
        i=pat1(res,N,1);
        pat2(res,N,i);
        return res;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.pattern(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends
