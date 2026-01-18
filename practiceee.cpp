#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll n;
bool mono (ll mid) {
    ll res = (mid * (mid + 1)) >> 1;
    if(n > res) return false;
    else return true;
}
int bs (){
    ll l = 1, r = 1e10;
    while(r - l > 0) {
        ll mid = (l + r) / 2;
        if(mono(mid)) {
            r = mid;
        }
        else l = mid + 1;
    }
    if(mono(l)) return l;

    return r;
}
inline void solve(int tc){
    cin >> n;

    ll ans = bs();
    cout << ans << '\n';
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}