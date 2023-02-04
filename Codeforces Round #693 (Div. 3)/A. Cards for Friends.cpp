#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int A, B, C; cin >> A >> B >> C;
        int D = 1;
        while (A % 2 == 0) {
            A /= 2; D *= 2;
        }
        while (B % 2 == 0) {
            B /= 2; D *= 2;
        }
        cout << (D>=C?"Yes":"No") << endl;

    }
    return 0;

}
