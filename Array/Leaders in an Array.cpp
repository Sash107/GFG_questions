//{ Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
    

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int arr[], int n){
        int i,max=n-1,j=1;
        vector <int> final;
        final.push_back(arr[max]);
        for(i=n-2;i>=0;i--){
            if (arr[i]>=arr[max]){
                final.push_back(arr[i]);
                max=i;
                j++;
            }
        }
        int start=0,end=j-1;
        while(end>start){
            swap(final[start],final[end]);
            start++;
            end--;
        }
        return final;
    }
};

//{ Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}

// } Driver Code Ends
