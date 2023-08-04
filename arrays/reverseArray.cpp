#include<iostream>
using namespace std;



void arrayReverse(int arr[],int n){
   int start = 0;
   int end = n-1;
   while(start <= end){
    swap(arr[start],arr[end]);
    start++;
    end--;
   }
  
}

void printArray(int arr[],int n){
   for(int i=0;i<n;i++){
     cout<<arr[i]<<" ";
  } 

   
}


int main(){
  int num[100];
  int size;
  cin>>size;
  for(int i=0;i<size;i++){
    cin>>num[i];
  }

  cout<<"the reverse of the array is "<<endl;
  arrayReverse(num,size);
  printArray(num,size);
}