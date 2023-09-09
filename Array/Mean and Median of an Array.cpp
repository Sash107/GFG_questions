#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int median(int A[],int N)
    {
        int median;
        sort(A,A+N);
        
      if(N%2!=0){
           median=floor(A[N/2]);
          return median;
      }
      if(N%2==0){
          median = floor((A[N/2 -1]+A[N/2])/2);
          return median;
      }
    }
    int mean(int A[],int N)
    {
        int sum=A[0];
        for (int i=1;i<N;i++){
            sum += A[i];
        }
       int mean=floor(sum/N);
           return mean;
    }
 
};
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++){
            cin>>a[i];
        }
        Solution ob;
        cout<<ob.mean(a,N)<<" "<<ob.median(a,N)<<endl;
    }
    return 0;
}