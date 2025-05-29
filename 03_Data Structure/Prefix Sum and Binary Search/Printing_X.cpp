#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n; col++)
        {

            if ((row == col))
            {
                if ((ceil(n/2) == col) && (row == col))
                {
                    cout << "X";
                }
                else
                {
                    cout << "\\";
                }
                
            }
            else if (((row + col) == (n + 1)))
            {
                cout << "/";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}