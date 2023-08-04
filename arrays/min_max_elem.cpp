#include<iostream>
using namespace std;

int getMin(int num[], int n){
    int mini = INT8_MAX;

 

    for(int i=0;i<n;i++){
           mini = min(mini,num[i]);
        // if(num[i]<min){
        //     min = num[i];
        // }
    }
    return mini;
}


int getMax(int num[], int n){
    int maxi = INT8_MIN;
    

    for(int i=0;i<n;i++){
      maxi =  max(maxi,num[i]);

        // if(num[i]>max){
        //     max = num[i];
        // }
    }
    return maxi;
}


int main(){
    int size;
    cin>>size;

    int num[100];
    for(int i=0; i<size; i++){
       cin>>num[i];
    }
    cout<< "max value of array is " << getMax(num,size)<<endl;
    cout<< "min value of array is " << getMin(num,size);
    return 0;
}