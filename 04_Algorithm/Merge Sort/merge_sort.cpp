#include <bits/stdc++.h>
using namespace std;

void merge(int ar[], int l, int mid, int r)
{
    int leftSize = mid - l + 1;
    int rightSize = r - mid;
    int L[leftSize], R[rightSize];
    int k = 0;
    for (int i = l; i <= mid; i++)
    {
        L[k] = ar[i];
        k++;
    }
    k = 0;
    for (int i = mid + 1; i <= r; i++)
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
        i++;
        curr++;
    }
    while (j < rightSize)
    {
        ar[curr] = R[j];
        j++;
        curr++;
    }
}
void merge_sort(int ar[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        merge_sort(ar, l, mid);
        merge_sort(ar, mid + 1, r);
        merge(ar, l, mid, r);
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

    merge_sort(ar, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }

    return 0;
}