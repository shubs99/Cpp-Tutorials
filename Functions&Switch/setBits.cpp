#include<iostream>
using namespace std;

int setBitCountA(int n){
  int count=0;

while(n!=0){
    if(n&1){
        count++;
    }

    n= n>>1;
}
return count;
}

int setBitCountB(int n){
  int count=0;

while(n!=0){
    if(n&1){
        count++;
    }

    n= n>>1;
}
return count;
}





int main(){
    int a,b;
    cin>>a>>b;
    int ans1 = setBitCountA(a);
    int ans2 = setBitCountB(b);
    int ans = ans1 + ans2;
    cout<<"the no of set bits are: "<< ans<<endl;

}