#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl '\n'
#define pb push_back
#define pp pop_back
#define ins insert
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define dn(a) cout << a << '\n'
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()
#define watch(x) cerr << '\n' << (#x) << " is " << (x) << '\n'
#define time cerr << "time = " << clock() << " ms" << '\n'
#define mem(a,b) memset(a, b, sizeof(a) )
#define sqr(a) ((a) * (a))
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
const int mod = 100000007;

void solve(int tc){
    ll a,b;    cin >> a >> b;
    ll mn = INT_MAX;
    if(a<b){
        cout << 1 << endl;
        return;
    }
    if( a == b ){
        dn(2);
        return;
    }
    else {
        for(int i = 0; i <= mn; i++){
            ll c = a,cnt = i, k = i+b;
            if(k == 1) continue;
            while(c){
                c /= k;
                cnt++;
            }
            if(mn>=cnt) mn = cnt;
        }
        dn(mn);
    }
}

int32_t main(){
    optimize();
    ll t = 1;  
    cin >> t;
    for(ll tc = 1; tc <= t; tc++){
        solve(tc);
    }
}