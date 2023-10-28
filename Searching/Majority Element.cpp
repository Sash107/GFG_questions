//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int arr[], int n)
    {
        if (n==1)return arr[0];
        int maj=arr[0];
        long long count=1;
        long long i;
        for(i=1;i<n;i++){
            if(arr[i]==maj)count++;
            else count--;
            if(count == 0){
                maj=arr[i];
                count=1;
            }
        }
        count=0;
        for(i=0;i<n;i++){
            if (arr[i]==maj)count++;
        }
        if(count>n/2)return maj;
        return -1;
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends
