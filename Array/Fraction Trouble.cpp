//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	vector<int>LargestFraction(int n, int d){
	    int num=-1,den=1;
	    for(int q=2;q<=10000;q++){
	        int p= (n*q)/d;
	        if((1.0*p)/q > (1.0*num)/den){
	            if((1.0)*p/q!=(1.0)*n/d){
	            num=p;
	            den=q;
	            }
	        }
	    }
	    if(d==1){
	        den=10000;
	        num=(n*10000) -1;
	    }
	    if(n==0){
	        num=0;
	        den=1;
	    }
	    vector <int> res;
	        int g=__gcd(num,den);
	        res.push_back(num/g);
	        res.push_back(den/g);
	        return res;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, d;
		cin >> n >> d;
		Solution ob;
		vector<int>ans = ob.LargestFraction(n, d);
		for(auto i: ans)
			cout << i <<" ";
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends
