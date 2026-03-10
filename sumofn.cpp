#include<iostream>
using namespace std;
void sumofn(int n,int &sum){
    if(n<=0)
    return;
     sum += n;
    sumofn(n-1,sum);   
}
int main(){
    int n;
    int sum =0;
    cin>>n;
    sumofn(n,sum);
    cout<<sum;
    return 0;
}