// a given array of size N = 2M+1 , M numbers are present twice and 1 number is present only once

// #include <iostream>
// using namespace std;

// int main()
// {
//     int ans = 0;
//     int arr[5] = {1, 2, 3, 4, 4};

//      for (int i = 0; i < 5; i++)
//     {
//         ans = ans ^ arr[i];
//         ans = ans ^ i;
//     }

//    // for (int i = 1; i < 5; i++)
//     //{
// //        ans = ans ^ i;

      
//    // }
//       cout << ans;
// }



    
// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;

// int findDuplicate(vector<int> &arr) 
// {
   
     
// }

int main() {
    
    vector<int> arr{1,3,3,7,4};
   int n=arr.size();
   int ans=0;

      // XOR ing all elements in array
     for(int i=0;i<n;i++){
         ans = ans^arr[i];
         cout<<ans<<" ";
     }
     cout<<endl;
    //  XOR ing [1,N-1]
     for(int i=1; i<n;i++){
           ans = ans^i;
           cout<<ans<<" ";
     }

  
}