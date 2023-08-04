//First and Last Position of an Element In Sorted Array

// input : {1,2,3,4,5,2,6}
//             2 | 8
// output : 1 5  | -1 -1


#include<iostream>
using namespace std;

int findFirstOccurance(int arr[] , int n , int key){
    int s = 0; 
    int e = n -1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e){
        if(key == arr[mid]){
            ans = mid;
            e = mid - 1;
        }

        else if(key < arr[mid]){
            e = mid -1;
        }

        else if (key > arr[mid]){
            s = mid + 1;
        }
     mid = s + (e-s)/2;
    }
    return ans;
}

int findLastOccurance(int arr[] , int n , int key){
    int s = 0; 
    int e = n -1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e){
        if(key == arr[mid]){
            ans = mid;
            s = mid + 1;
        }

        else if(key < arr[mid]){
            e = mid -1;
        }

        else if (key > arr[mid]){
            s = mid + 1;
        }
     mid = s + (e-s)/2;
    }
    return ans;
}


int main(){
    int even[10] = {1,2,3,3,3,3,3,3,3,5};

    cout<<"the first occurance of 3 is "<<findFirstOccurance(even,10,3);
    cout<<" and the second occurance of 3 is "<<findLastOccurance(even,10,3);
}