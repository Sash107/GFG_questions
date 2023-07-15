//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        double d = (b*b)-(4*a*c);
        if(d<0){
            return {-1};
        }
        else{
            double x1= floor((-b + sqrt(d))/(2*a));
            double x2= floor((-b - sqrt(d))/(2*a));
            if (x1>x2){
                return {x1,x2};
            }
            return {x2,x1};
        }
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;
        Solution ob;
        vector<int> roots = ob.quadraticRoots(a, b, c);
        if (roots.size() == 1 && roots[0] == -1)
            cout << "Imaginary";
        else
            for (int i = 0; i < roots.size(); i++) cout << roots[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
