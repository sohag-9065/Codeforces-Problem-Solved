#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;

    int Sereja = 0, Dima = 0, f1 = 1;

    vector<int> v(n);
    for( int i = 0; i < n; i++ ) cin >> v[i];

    while (!v.empty())
    {
        if (f1 == 1)
        {
            if (*v.begin() > v.back())
            {
                Sereja += *v.begin();
                v.erase(v.begin());
            }
            else
            {
                Sereja += v.back();
                v.pop_back();
            }
            f1 = 5;
        }
        else
        {
            if (*v.begin() > v.back())
            {
                Dima += *v.begin();
                v.erase(v.begin());
            }
            else
            {
                Dima += v.back();
                v.pop_back();
            }
            f1 = 1;
        }
    }

    cout << Sereja << " "  << Dima << endl;
}