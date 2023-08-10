#include <iostream>
using namespace std;
class Puzzle{
    public:
void TOH(int start,int destination,int helper,int n,int*s){   
    if (n==1){
        cout<<"Moving plate "<<n<<" from "<<start<<" to "<<destination<<endl;
        *s=(*s)+1;
        return;
    }
    TOH(start,helper,destination,n-1,s);
    cout<<"Moving plate "<<n<<" from "<<start<<" to "<<destination<<endl;
    *s=*s+1;
    TOH(helper,destination,start,n-1,s);
}
};
int main(){
    int start=1,destination=3,helper=2,n,steps=0;
    int *s=&steps;
    cout<<"Enter the number of plates in the Tower of Hanoi: ";
    cin>>n;
    Puzzle obj;
    obj.TOH(start,destination,helper,n,s);
    cout<<"Total number of steps is "<<steps<<"\n";
    return 0;
}
