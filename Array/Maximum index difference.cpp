//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int A[], int N) 
    { 
        int i,j,res=0;
        int Max[N],Min[N];
        Max[N-1]=A[N-1];
        Min[0]=A[0];
        for (i=1;i<N;i++){
            Min[i]=min(Min[i-1],A[i]);
        }
        for (j=N-2;j>=0;j--){
            Max[j]=max(Max[j+1],A[j]);
        }
        i=0,j=0;
        while((i<N)&&(j<N)){
            if (Max[j]>=Min[i]){
                res= max(res,j-i);
                j++;
            }
            if(Max[j]<Min[i]){
                i++;
            }
        }
        return res;
    }
};

//{ Driver Code Starts.
  
/* Driver program to test above functions */
int main() 
{
    int T;
    //testcases
    cin>>T;
    while(T--){
        int num;
        //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for (int i = 0; i<num; i++)
            cin>>arr[i];
        Solution ob;
        
        //calling maxIndexDiff() function
        cout<<ob.maxIndexDiff(arr, num)<<endl;    
        
    }
    return 0;
} 
// } Driver Code Ends
