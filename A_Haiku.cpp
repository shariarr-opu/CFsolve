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
int vowel(string s){
    int vow = 0;
    fi(0,s.size()){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') ++vow;
        else continue;
    }
    return vow;
}
int main()
{
    optimize();
    vector<string>v;
    fi(0,3){
        string s;
        getline(cin,s); 
        v.pb(s);
    }
    int cnt = 0;
    bool ok = 1;
    fe(u,v){
        ++cnt;
        if(cnt == 1){
            if(vowel(u) == 5)continue;
            else{
                ok = 0;
                break;
            }
        }
        if(cnt == 2){
            if(vowel(u) == 7)continue;
            else{
                ok = 0;
                break;
            }
        }
        if(cnt == 3){
            if(vowel(u) == 5)continue;
            else{
                ok = 0;
                break;
            }
        }
    }
    ok? yes: no;
}