#include <iostream>
using namespace std;

int findMax(int arr[], int n)
{
    int max = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max = findMax(arr, n);
    cout << "The maximum element in the array is: " << max << endl;
    return 0;
}
