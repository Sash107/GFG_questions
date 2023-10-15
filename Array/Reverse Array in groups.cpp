//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    void reverse(vector<long long>& arr,int n,int k,int i){
        int j;
        for (j=i;j<i+(k/2);j++){
            swap(arr[j],arr[(i+k)-(j-i+1)]);
        }
    }
    void reverseInGroups(vector<long long>& arr, int n, int k){
        int times=n/k,m;
        int i=0;
        for(m=1;m<=times;m++){
            reverse (arr,n,k,i);
            i=i+k;
        }
        if(n%k!=0){
            m=times*k;
            int low=m,high=n-1;
            while(low<high){
                swap(arr[low],arr[high]);
                low++;
                high--;
            }
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t; 
    cin >> t; 
    while(t--){ 
        int n;
        cin >> n; 
        vector<long long> arr; 
        int k;
        cin >> k; 

        for(long long i = 0; i<n; i++)
        {
            long long x;
            cin >> x; 
            arr.push_back(x); 
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);
        
        for(long long i = 0; i<n; i++){
            cout << arr[i] << " "; 
        }
        cout << endl;
    }
    return 0;
}


// } Driver Code Ends
