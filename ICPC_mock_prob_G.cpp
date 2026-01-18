#include <bits/stdc++.h>
using namespace std;
#define ll long long

inline void solve(int tc)
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        getline(cin >> ws, s);

        int cnt = 0;
        for(int i = 0; i < s.size(); i++) {
           if(s[i] == '\\' && i + 1 < s.size() && s[i + 1] == '0') break;
           cnt++;
        }
        cout << sizeof(s) << " " << cnt << '\n';
    }

    // time complexity:
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++)
        solve(i);

    return 0;
}