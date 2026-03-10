#include<iostream>
using namespace std;
bool palindrome(string s,int left,int right){
    while(left < right)
    {
        if(!isalnum(s[left])){
            left++;
        }
        else if(!isalnum(s[right])){
            right--;
        }
        else if(tolower(s[left]) != tolower(s[right])){
            return false;
        }
        else{
        left++;
        right--;
    }
}
    return true;
}
int main(){
    string s;
    cin>>s;
    int n = s.size();
int ans = palindrome(s,0,n-1);
if(ans == true){
    cout<<"Palindrome";
}
else
cout<<"not palindrome";
return 0;
}