//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
    int circularSubarraySum(int arr[], int n){
        int i,sum=arr[0];
        if(n==1)return arr[0];
        int glob_max1=arr[0],curr_max1=arr[0];
        for(i=1;i<n;i++){
            curr_max1= max(curr_max1+arr[i],(arr[i]));
            glob_max1=max(curr_max1,glob_max1);
        }
        if(glob_max1<=0)return glob_max1;
        arr[0]=(-1)*arr[0];
        for(i=1;i<n;i++){
            sum+=arr[i];
            arr[i]=(-1)*arr[i];
        }
        int glob_max=arr[0],curr_max=arr[0];
        for(i=1;i<n;i++){
            curr_max= max(curr_max+arr[i],(arr[i]));
            glob_max=max(curr_max,glob_max);
        }
        sum=sum+glob_max;
        if(glob_max1>sum)return glob_max1;
        return sum;
    }
};

//{ Driver Code Starts.

int main()
 {
	int T;
	
	//testcases
	cin>> T;
	
	while (T--)
	{
	    int num;
	    
	    //size of array
	    cin>>num;
	    int arr[num];
	    
	    //inserting elements
	    for(int i = 0; i<num; i++)
	        cin>>arr[i];
	        
	    Solution ob;
	    //calling function
	    cout << ob.circularSubarraySum(arr, num) << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends
