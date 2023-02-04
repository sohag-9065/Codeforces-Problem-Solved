#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        sort(A, A + n);

        int B[300000] = {0};
        bool flag = false;
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            B[A[i]]++;
            if (B[A[i]] >= 3)
            {
                c = A[i];
                flag = true;
                break;
            }
        }
        if (flag)
        {
            cout << c << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }



    return 0;
}
