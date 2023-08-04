// #include<iostream>
// using namespace std;

// void bubble_sort(int arr[], int n){
//     for(int i=n-1; i>=0 ; i--){
//         for(int j=i; j<=i-1; j++){
//             if(arr[j] > arr[j+1]){
//                 swap(arr[j], arr[j+1]);
//             }
//     }
// }
// }



// int main(){
//     int n;
//     cin>> n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }
//     bubble_sort(arr,n);
//     for(int i=0; i<n; i++){
//         cout << arr[i] << " ";
//     }
// }


// tc : O(n^2)  : worst complexity



// best case is O(N)


#include<iostream>
using namespace std;

void bubble_sort(int arr[], int n){
    for(int i=n-1; i>=0 ; i--){
        int doSwap = 0;
        for(int j=i; j<=i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                doSwap = 1;
            }
    }
    if(doSwap == 0){
        break;
    }
    cout << "ryns";
}

}



int main(){
    int n;
    cin>> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    bubble_sort(arr,n);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}