#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define watch(x) cerr << "\n" << (#x) << " is " << (x) << endl
#define time cerr << "time = " << clock() << " ms" << '\n'
#define optimize()                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0);
#define pb push_back
#define pp pop_back
#define ins insert
#define vi vector<int>
#define vll vector<ll>
#define msi multiset<int>
#define usi unordered_set<int>
#define si set<int>
#define mii map<int, int>
#define pii pair<int, int>
#define psi pair<string, int>
#define vpii vector<pii>
#define spii set<pii>
#define fi(s, e) for (int i = s; i < e; ++i)
#define fj(s, e) for (int j = s; j < e; ++j)
#define fk(s, e) for (int k = s; k < e; ++k)
#define fe(s, e) for (auto s : e)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define dn(a) cout << a << endl
const int N = 1e5 + 123;
int main()
{
    optimize();
    string s;   cin >> s;
    int c = 0, p = 0, cnt = 0, ans = 0;
    for(int i = 0; s[i] != '\0'; ++i){
        if(s[i] == 'C'){
            c++;
            if(c == 5){
                c = 0;
                cnt++;
            }
            else if(s[i+1] == 'P' || i == (s.size()-1)){
                c = 0;
                cnt++;
            }
        }
        if(s[i] == 'P'){
            p++;
            if(p==5){
                p = 0;
                cnt++;
            }
            else if(s[i+1] == 'C' || i == (s.size()-1)){
                p = 0;
                cnt++;
            }
        }
    }
    // cout << c << " " << p << endl;
    cout << cnt << endl;
        
}