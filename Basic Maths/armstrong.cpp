#include<bits/stdc++.h>
using namespace std;


int armstrongNum(int n){
    int count = 0;
    int temp = n;
    while(temp>0){
        count++;
        temp = temp/10;
    }
    
int sum =0;
while(n>0){
    int digit = n%10;
    sum = sum + pow(digit,count);
    n = n/10;
}
return sum;
}

int main(){
    int n;
    cin>>n;
    int dup = n;
    int ans = armstrongNum(n);
    if (ans == dup) cout <<"true";
    else cout << "false";
}


Time Complexity: O(n) where n is the number of digits since we need to traverse every digit and add digits raised to power no. of digits to sum.

Space Complexity: O(1) since no extra space is required