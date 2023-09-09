#include <bits/stdc++.h>
using namespace std;
class Solution{
  public:
    vector<int> largestAndSecondLargest(int sizeOfArray, int arr[]){
        int max = INT_MIN, max2= INT_MIN;
        for (long long i=0;i<sizeOfArray;i++){
            if (max<arr[i]){
                max2=max;
                max=arr[i];
            }
            if(max>arr[i]){
                if (arr[i]>max2){
                    max2=arr[i];
                }
            }
        }
        vector <int> result(2);
        result[0]=max;
        if (max2==INT_MIN){
            result[1]=-1;
        }
        else {
            result[1]=max2;
        }
         return result;
    }
   
};
int main() {
	int testcases;
	cin >> testcases;
	while(testcases--){
	    int sizeOfArray;
	    cin >> sizeOfArray;
	    
	    int arr[sizeOfArray];
	    for(int index = 0; index < sizeOfArray; index++){
	        cin >> arr[index];
	    }
	    Solution obj;
	    vector<int> ans = obj.largestAndSecondLargest(sizeOfArray, arr);
	    cout<<ans[0]<<' '<<ans[1]<<endl;
	}
	
	return 0;
}