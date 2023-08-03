#include <iostream>
using namespace std;
void initialize(int *ptr){
    *ptr=0;
    for(int i=1;i<=255;i++){
        *(ptr+i)= *(ptr+(i&(i-1)))+1;
    }
}
int countbits(int n,int *ptr){
    return (*(ptr+ (n&255))+*(ptr+ ((n>>8)&255))+*(ptr+ ((n>>16)&255))+*(ptr+ (n>>24)));
}
int main(){
    int n;
    cout<< "Enter the number: ";
    cin>>n;
    int tbl[256];
    initialize(tbl);
    int count = countbits(n, tbl);
    cout<<"The total number of signed bits in the entered number is : "<<count<<endl<<endl;
    return 0;
}
