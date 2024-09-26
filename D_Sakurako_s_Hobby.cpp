#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl '\n'
#define pb push_back
#define pp pop_back
#define in insert
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define dn(a) cout << a << '\n'
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()
#define watch(x) cerr << '\n' << (#x) << " is " << (x) << '\n'
#define time cerr << "time = " << clock() << " ms" << '\n'
#define reset(a,b) memset(a, b, sizeof(a) )
#define sqr(a) ((a) * (a))
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int inf = 2e5+5;
const int mod = 998244353;

int dx[] = {-1, +1, 0, 0};
int dy[] = {0, 0, -1, +1};
ll gcd(ll a, ll b){ return __gcd(a, b);}
ll lcm(ll a, ll b){ return ((a*b)/gcd(a, b));}

vector<ll>adj[inf], mark;
bool vis[inf];
string s;
ll cnt, n;

void dfs(ll u){
    vis[u] = 1;
    mark.pb(u);
    if(s[u-1] == '0') cnt++;
    for(auto v : adj[u]){
        if(!vis[v]){
            dfs(v);
        }
    }
}

void solve(int tc){
    for(int i = 0; i <= n; i++){
        adj[i].clear();
        vis[i] = 0;
    }

    cin >> n;
    vector<ll>arr(n+1,0);
    for(int i = 1; i <= n; i++) cin >> arr[i];
    cin >> s;

    for(int i = 1; i <= n; i++){
        adj[i].pb(arr[i]);
        adj[arr[i]].pb(i);
    }

    ll ans[n+1] = {};
    for(int i = 1; i <= n; i++){
        if(!vis[i]){
            mark.clear();
            cnt = 0;
            dfs(i);
            for(auto u : mark) ans[u] = cnt;
        }
    }

    for(int i = 1; i <= n; i++) cout << ans[i] << " ";
    cout << endl;
}

int32_t main(){
    optimize();
    int t = 1;  
    cin >> t;
    for(int tc = 1; tc <= t; tc++){
        solve(tc);
    }

    return 0;
}