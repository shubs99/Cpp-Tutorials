#include<iostream>
using namespace std;

int getSum(int num[],int n){
    int sum =0;
    for(int i=0;i<n;i++){
        sum=sum+num[i];
}

return sum;
}





int main(){
    int size;
    int num[100];
    cin>> size;
     for(int i=0;i<size;i++){
        cin>>num[i];
     }

     cout<<"the sum of the elements of the array is "<< getSum(num,size);
}