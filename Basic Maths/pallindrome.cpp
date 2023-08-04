#include<bits/stdc++.h>
using namespace std;

int pallindrome(int n){
    int ans=0;
    while(n>0){
        int ld = n % 10;
        ans = (ans * 10) + ld;
        n = n / 10;
    }
   return ans;
}

int main()
{
    int n;
    cin>>n;
    int dup=n;
    int ans = pallindrome(n);
     if(dup == ans){
    cout<<"true"<<endl;
    }else{
        cout << "false";
    }
}

Time Complexity: O(logN) for reversing N digits of input integer.

Space Complexity: O(1)