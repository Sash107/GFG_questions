//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> arr, long long n, long long x){
        long long i,curr,start=0,end=n-1,mid;
        if(arr[0]>x)return -1;
        if(arr[n-1]<x)return n-1;
        while(start<=end){
            mid=(start+end)/2;
            if(arr[mid]<=x && arr[mid+1]>x)return mid;
            if(arr[mid]>x)end=mid-1;
            if(arr[mid]<x)start=mid+1;
        }
    }
};


//{ Driver Code Starts.

int main() {
	
	long long t;
	cin >> t;
	
	while(t--){
	    long long n;
	    cin >> n;
	    long long x;
	    cin >> x;
	    
	    vector<long long> v;
	    
	    for(long long i = 0;i<n;i++){
	        long long temp;
	        cin >> temp;
	        v.push_back(temp);
	    }
	    Solution obj;
	    cout << obj.findFloor(v, n, x) << endl;
	   
	}
	
	return 0;
}
// } Driver Code Ends
