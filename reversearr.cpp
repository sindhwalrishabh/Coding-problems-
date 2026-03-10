#include<iostream>
using namespace std;
void rev(int arr[],int start,int end){
    if( start >= end) return;
    swap(arr[start],arr[end]);
    rev(arr,start+1,end-1);
}
int main(){
   
    int arr[5] = {1,2,3,4,5};
     int n = 5;
    rev(arr,0,n-1);
    for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
    }
    return 0;
}