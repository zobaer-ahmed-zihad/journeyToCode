#include <bits/stdc++.h>
using namespace std;
void merge(int ar[], int l, int m, int r)
{
    int leftSize = m - l + 1;
    int rightSize = r - m;
    int L[leftSize], R[rightSize];
    int k = 0;
    for (int i = l; i < leftSize; i++)
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
    int cur = l;
    while (i < leftSize && j < rightSize)
    {
        if (L[i] <= R[j])
        {
            ar[cur] = L[i];
            i++;
        }
        else
        {
            ar[cur] = R[j];
            j++;
        }
        cur++;
    }
    while (i < leftSize)
    {
        ar[cur] = L[i];
        cur++;
        i++;
    }
    while (j < rightSize)
    {
        ar[cur] = R[j];
        cur++;
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