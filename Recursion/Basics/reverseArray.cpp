
// using two var / pointers

#include<bits/stdc++.h>
using namespace std;


void reverseArray(int i,int arr[], int j){
  if(i>=j) return;
  swap(arr[i],arr[j]);
  reverseArray(i+1,arr,j-1);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    reverseArray(0,arr,n-1);
    for(int i=0; i<n; i++){
        cout<< arr[i] << " ";
    }
    return 0;
}




// using one var / pointers


#include<bits/stdc++.h>
using namespace std;

void reverseArray(int i, int arr[],int n){
  if(i >= n/2) return;
  swap(arr[i],arr[n-i-1]);
  reverseArray(i+1,arr,n);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    reverseArray(0,arr,n);
    for(int i=0; i<n; i++){
        cout<< arr[i] << " ";
    }
    return 0;
}
