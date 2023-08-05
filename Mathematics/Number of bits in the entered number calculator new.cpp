#include <iostream>
using namespace std;
    int tbl[256];
void initialize(){
    tbl[0]=0;
    for(int i=1;i<=255;i++){
        tbl[i]= tbl[i&(i-1)]+1;
    }
}
int countbits(int n){
    return (tbl[(n&255)]+tbl[(n>>8)&255]+tbl[(n>>16)&255]+tbl[(n>>24)]);
}
int main(){
    int n;
    cout<< "Enter the number: ";
    cin>>n;
    initialize();
    int count = countbits(n);
    cout<<"The total number of signed bits in the entered number is : "<<count<<endl<<endl;
    return 0;
}
