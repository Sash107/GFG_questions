#include<iostream>
using namespace std;
int ropecut(int n,int a,int b,int c){
    if (n==0){
        return 0;
    }
    if (n<=-1){
        return -1;
    }
    int res= max(ropecut(n-a,a,b,c),max(ropecut(n-b,a,b,c),ropecut(n-c,a,b,c)));
    if (res==-1){
        return -1;
    }
    return res+1;
}
int main(){
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    cout<<ropecut(n,a,b,c)<<endl;
  return 0;
}
