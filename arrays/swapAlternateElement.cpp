// inp : {1,2,3,4,5}
// op: {2,1,4,3,5}

#include<iostream>
using namespace std;

void swapedArray(int arr[],int size){
   for(int i=0; i<size; i+=2){
    if(arr[i+1] < size){
        swap(arr[i+1],arr[i]);

    }
}

}

void printArray(int arr[],int size){
 for(int i=0; i<size; i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}


int main(){
    int size ;
    cin>>size;
    int num[100];

    for(int i=0; i<size; i++){
        cin>> num[i];
    }
    cout<<"the swapped array is "<<endl;
    swapedArray(num,size);
    printArray(num,size);
}