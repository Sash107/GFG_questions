#include <iostream>
using namespace std;
void SubsetPrinter(string og,string current,int n=0){
    if(n==og.length()){
        cout<<current<<endl;
        return;
    }
    SubsetPrinter(og,current,n+1);
    SubsetPrinter(og,current+og[n],n+1);
}
int main(){
    string og;
    cout<<"Enter the string: ";
    cin>>og;
    string current="";
    SubsetPrinter(og,current);
    return 0;
}
