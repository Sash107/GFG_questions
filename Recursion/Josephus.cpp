#include <iostream>
using namespace std;
int Jos(int n,int k){
    if(n==1){
        return 0;
    }
    return (Jos(n-1,k)+k)%n;
}
int Jos_safe(int n, int k){
    return Jos(n,k)+1;
}
int main(){
    int n,k;
    cout<<"Total number of people: ";
    cin>>n;
    cout<<endl<<"Number at which person will be executed: ";
    cin>>k;
    cout<<endl<<"The position at which person will be safe: ";
    cout<<Jos_safe(n,k)<<endl<<endl;
    return 0;
}
