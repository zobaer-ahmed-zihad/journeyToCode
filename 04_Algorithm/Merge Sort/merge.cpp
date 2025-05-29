#include <bits/stdc++.h>
using namespace std;
void merge(int ar[], int l, int m, int r)
{
    int leftSize = m - l + 1;
    int rightSize = r - m;
    int L[leftSize], R[rightSize];
    int k = 0;
    for (int i = l; i <= m; i++)
    {
        L[k] = ar[i];
        k++;
    }
    k = 0;
    for (int i = m + 1; i <= r; i++)
    {
        R[k] = ar[i];
        k++;
    }
    int i = 0, j = 0;
    int curr = l;
    while (i < leftSize && j < rightSize)
    {
        if (L[i] <= R[j])
        {
            ar[curr] = L[i];
            i++;
        }
        else
        {
            ar[curr] = R[j];
            j++;
        }
        curr++;
    }
    while (i < leftSize)
    {
        ar[curr] = L[i];
        curr++;
        i++;
    }
    while (j < rightSize)
    {
        ar[curr] = R[j];
        curr++;
        j++;
    }
}
int main()
{
    int n;
    cin >> n;
    int ar[n];

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    merge(ar, 0, 3, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
    return 0;
}