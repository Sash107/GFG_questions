//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
    public:
    // arr: input array
    // num: length of array
    // This function returns true or false
    //Function to check if array is sorted and rotated.
    bool is_inc(int arr[],int start,int end){
        for (int i=start;i<end;i++){
            if (arr[i]>arr[i+1]){
                return false;
            }
        }
        return true;
    }
    bool is_dec(int arr[],int start,int end){
        for (int i=start;i<end;i++){
            if (arr[i]<arr[i+1]){
                return false;
            }
        }
        return true;
    }
    bool isrotinc(int arr[],int n, int min_index,int max_index){
        if(arr[0]<arr[n-1])return false;
        return ((is_inc(arr,0,max_index))&&(is_inc(arr,min_index,n-1)));
    }
    bool isrotdec(int arr[],int n, int min_index,int max_index){
        if(arr[0]>arr[n-1])return false;
        return ((is_dec(arr,0,min_index))&&(is_dec(arr,max_index,n-1)));
    }
    bool checkRotatedAndSorted(int arr[],int n) {
        
        int min_index=0,max_index=0;
        for(int i=1;i<n;i++){
            if (arr[i]<arr[min_index])min_index=i;
            if(arr[i]>arr[max_index])max_index=i;
        }
        bool res=false;
        if (arr[min_index]==arr[max_index]) return true;
        if(arr[min_index-1]==arr[max_index]){
            res= isrotinc(arr,n,min_index, max_index);
        }
        if(arr[max_index-1]==arr[min_index]){
            res= isrotdec(arr,n,min_index, max_index);
        }
        return res;
    }
};

//{ Driver Code Starts.

int main()
 {
	int T;
	//testcases
	cin>> T;
	
	while (T--){
	    int num;
	    //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for(int i = 0; i<num; ++i)
            cin>>arr[i];
        
        bool flag = false;
        Solution ob;
        
        //function call
        flag = ob.checkRotatedAndSorted(arr, num);
        
        //printing "No" if not sorted and
        //rotated else "Yes"
        if(!flag){
            cout << "No"<<endl;
        }
        else
        cout << "Yes"<<endl;
    
	}
	
	return 0;
}
// } Driver Code Ends
