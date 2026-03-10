#include<iostream>
using namespace std;
// use of backtracking to 
void printn(int i,int n){
    if( i < 1)
    return ;
    printn(i-1,n);
    cout<<i<<" ";
}
void printnto1(int n){
    if( n < 1)
    return ;
    printnto1(n-1);
    cout<<n<<" ";
}
int main(){
    int n;
    cin>>n;
    int i;
    cin>>i;
    printn(i,n);
    cout<<endl;
    printnto1(n);
    return 0;
}