#include<iostream>
using namespace std;
void printntimes(int i,int n){
    if(i > n){
        return;
    }
    cout<<"hello"<<" ";
        printntimes(i+1,n);
    }
void printn(int i,int n){
    if( i > n)
    return ;
    cout<<i<<" ";
    printn(i+1,n);
}
void printn21(int n){
         if(n<=0)
         return ;
         cout<<n<<" ";
         printn21(n-1);
}

    int main(){
        int n;
        cin>>n;
        printntimes(1,n);
        cout<<endl;
        printn(1,n);
        cout<<endl;
        printn21(n);
        
        return 0;
}