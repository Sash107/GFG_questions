//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
   public:
    int digitsInFactorial(int N)
    {
        double x=0,y,i;
        if (N==0){
            return (1);
        }
        for (i=1;i<=N;i++){
            x=x+log10(i);
        }
        return(floor(x)+1);
    }
};

//{ Driver Code Starts.

int main()
{
    int T;
    
    //taking testcases
    cin>>T;
    while(T--)
    {
        int N;
        
        //taking N
        cin>>N;
        Solution ob;
        //calling method digitsInFactorial()
        cout<<ob.digitsInFactorial(N)<<endl;
    }
    return 0;
}

// } Driver Code Ends
