#include<bits/stdc++.h>
using namespace std;
int findMajority(int a[], int size)
{
    int maj_index = 0;
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[maj_index] == a[i])
            count++;
        else
            count--;
        if (count == 0)
        {
            maj_index = i;
            count = 1;
        }
        return a[maj_index];
    }
}
bool isMajority(int a[], int size, int cand)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] == cand)
            count++;
    }
    if (count > size / 2)
        return 1;
    else
        return 0;
}
void printMajority(int a[], int size)
{
    int cand = findMajority(a, size);
    if (isMajority(a, size, cand))
        cout << "The majority element is :" << cand << "";
    else
        cout << "No Majority";
}

int main(){
    int a[]={1,2,3,4,1,1,1,1,1,2,2,1,1};
    int size=sizeof(a)/sizeof(a[0]);
    printMajority(a,size);
    return 0;
//step 1:find majority
//step2:confirm
}

