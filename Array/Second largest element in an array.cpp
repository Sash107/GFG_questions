#include <iostream>
using namespace std;
int second_largest(int *arr,int n){
    int i;
    int l=0,res=-1;
    for(i=1;i<n;i++){
        if (arr[i]>arr[l]){
            res=l;
            l=i;
        }
        if(arr[i]<arr[l]){
            if (arr[i]>arr[res]){
                res=i;
            }
        }
    }
    return res;
}
int main() {
    int m,n,i;
    cout<<"Enter the size of array: ";
    cin>>m;
    int arr[m];
    for (i=0;i<m;i++){
        cout<<"Enter the "<<i+1<<" element of array: ";
        cin>>arr[i];
    
}
if (second_largest(arr,m)==-1){
    cout<<"The array doesn't have any second largest element";
}
else{
cout<<"The second largest element in the array is: "<<arr[second_largest(arr,m)];
}
}
