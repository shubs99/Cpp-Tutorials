#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;
    int mid = (start+end)/ 2;

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}

int main()
{
    int evenArray[6] = {2,4,12,34,56,72};
    int oddArray[5] = {3, 87, 15, 63, 23};
    int index = binarySearch(evenArray, 5,56);

    cout << "index of is " << index << endl;

    return 0;
}