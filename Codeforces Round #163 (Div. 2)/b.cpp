#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    int n,t;
    cin >> n >> t;
    string s;
    cin >> s;

    for(int i=0; i<s.length(); i++){
        if(s[i] == 'B'){
            v.push_back(i);
        }
    }

    for(int i=0; i<t; i++){
        for(int j=0; j<v.size(); j++){
              if(v[j] < n-1 && s[v[j]+1] != 'B'){
                swap(s[v[j]], s[v[j]+1]);
                v[j] = v[j]+1;
             }
        }
    }

    cout << s << endl;

    return 0;
}
