#include <bits/stdc++.h>
using namespace std;
int untilPeakElement(int arr[], int l, int h, int n)
{
    int mid = (l + h) / 2;
    if (((mid == 0) || (arr[mid - 1] <= arr[mid])) && ((mid == n - 1) || (arr[mid + 1] <= arr[mid])))
        return mid;
    else if (arr[mid - 1] > arr[mid])
        return untilPeakElement(arr, l, mid - 1, n);
    else
        return untilPeakElement(arr, mid + 1, h, n);
}
int findPeakElement(int arr[], int n)
{
    return untilPeakElement(arr, 0, n - 1, n);
}
int main()
{
    int arr[] = {100, 2, 15, 2, 23, 90, 67};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Peak Element in an arrray is " << endl
         << arr[findPeakElement(arr, n)];
}
