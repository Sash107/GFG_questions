#include <iostream>
#include <vector>
using namespace std;
int max_sum(int arr[],int n){
    int sum_so_far=0;
    int sum=INT32_MIN;
    int i;
    for (i=0;i<n;i++){
        sum_so_far +=arr[i];
        if(sum_so_far>sum){
            sum=sum_so_far;
        }
        if(sum_so_far<0){
            sum_so_far=0;
        }
    }
    return sum;
}
int main() {
    int n;
    cout<<"Enter th4e size of array: ";
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cout<<"Enter the "<<i<<" element: ";
        cin>>arr[i];
    }
    cout<<"The maximum contagious sum in this array is : "<<max_sum(arr,n)<<endl;
}
