#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define endl '\n'

void toggle(string &str)
{
    int length = str.length();
    for (int i = 0; i < length; i++)
    {
        int c = str[i];
        if (islower(c))
            str[i] = toupper(c);
        else if (isupper(c))
            str[i] = tolower(c);
    }
}

int main(void)
{
    optimize();
    string str_input, str_out = "";
    cin >> str_input;

    for (auto c : str_input)
    {
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y' && c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U' && c != 'Y')
        {
            if (isupper(c))
            {
                char ch = tolower(c);
                str_out += '.';
                str_out +=   ch;
            }
            else
            {
                str_out += '.';
                str_out +=  c;
            }

        }
    }
    cout << str_out << endl;
}