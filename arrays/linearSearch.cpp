#include<iostream>
using namespace std;

bool search(int arr[],int n, int key)
{
   for(int i=0;i<n;i++){
     if(arr[i]==key){
        return 1;
     }
   }
   return 0;
}



int main(){
    int arr[8] = {1,3,5,8,3,5,22,56};
    cout<<"enter the key you want to search for"<<endl;
    int key;
     cin>>key;

    bool found =  search(arr,8,key);
    if(found){
        cout<<"found"<<endl;    
    }
    else{
        cout<<"no key found"<<endl;
    }

    return 0;
}