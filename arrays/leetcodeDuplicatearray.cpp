#include <iostream>
using namespace std;
#include<vector>

int main(){


vector<int> nums{1,0,1,3,2};

int n=nums.size();

for(int i=0; i<n; i++)
{
    for(int j=i+1; j<n; j++)
    {
        if((nums[i]^nums[j]) == 0){
         cout<<nums[i]<<" ";
        }
   }
 }

}