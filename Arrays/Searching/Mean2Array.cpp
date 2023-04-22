#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1,6,7,8};
    int ar[]={2,3,4,5};

    int n = sizeof(arr) / sizeof(arr[0]);
    int n2=sizeof(ar)/sizeof(ar[0]);
    int mid1=(n-1)/2;
    int mid2=(n2-1)/2;
    int median= (ar[mid2]+arr[mid1])/2;
    cout<<median;
}
