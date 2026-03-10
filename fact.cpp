#include<iostream>
using namespace std;
int printfactorial(int n){
    if(n==0 || n==1)
    return 1;
   return n * printfactorial(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<printfactorial(n);
    return 0;
}