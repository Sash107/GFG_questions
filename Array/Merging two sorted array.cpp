#include <iostream>
#include <vector>
using namespace std;
void sorted(int arr1[],int arr2[],int m,int n){
    int i=0,arr3[m+n],j=0,k=0;
    while((i<m)&&(i<n)){
        if (arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];
        }
        if(arr2[j]<arr1[i]){
            arr3[k++]=arr2[j++];
        }
    }
    while (i<m){
        arr3[k++]=arr1[i++];
    }
    while(j<n){
        arr3[k++]=arr2[j++];
    }
    cout<<endl;
    for (k=0;k<m+n;k++){
        cout<<arr3[k]<<" ";
    }
}
int main() {
    int m,n,i;
    cout<<"Enter the size of 1st sorted array: ";
    cin>>m;
    cout<<"Enter the size of 2nd sorted array: ";
    cin>>n;
    int arr1[m],arr2[n];
    for (i=0;i<m;i++){
        cout<<"Enter the "<<i<<" element of 1st sorted array: ";
        cin>>arr1[i];
    }
    cout<<endl;
    for (i=0;i<n;i++){
        cout<<"Enter the "<<i<<" element of 2nd sorted array: ";
        cin>>arr2[i];
    }
    sorted(arr1,arr2,m,n);
}
