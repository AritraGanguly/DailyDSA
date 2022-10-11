#include <bits/stdc++.h>
using namespace std;
int countInversion(int ar[], int size)
{
    int l = 0;
    int h = size - 1;
    int c = 0;
    int cinvs = 0;
    while (l < h)
    {
        cinvs++;
        if (ar[l] > ar[h])
            c++;
        h--;
        if (h == l)
        {
            h = size - 1;
            l++;
        }
    }
    cout << "No of Inversion:" << cinvs << endl;
    return c;
}
int main()
{
    int ar[] = {52244275, 123047899, 493394237, 922363607, 378906890, 188674257, 222477309, 902683641, 860884025, 339100162};
    int size = sizeof(ar) / sizeof(ar[0]);
    int cinv = countInversion(ar, size);
    cout << "No of counted Inversions:" << cinv << endl;
}
