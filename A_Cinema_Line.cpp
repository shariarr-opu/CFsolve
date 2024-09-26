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

const int inf = 105;
const int mod = 998244353;

int dx[] = {-1, +1, 0, 0};
int dy[] = {0, 0, -1, +1};
ll gcd(ll a, ll b){ return __gcd(a, b);}
ll lcm(ll a, ll b){ return ((a*b)/gcd(a, b));}

void solve(int tc){
    int n;  cin >> n;
    vector<int> arr(n);

    for(int &i : arr) cin >> i;

    int cnt[inf] = {0};

    for(int i = 0; i < n; i++){
        int change = arr[i] - 25;
        if(!change) cnt[arr[i]]++;
        else if(change == 25 && cnt[25] > 0){
            cnt[25]--, cnt[arr[i]]++;
        }
        else if(change == 75){
            if(cnt[50] > 0 && cnt[25] > 0){
                cnt[50]--, cnt[25]--, cnt[arr[i]]++;
            }
            else if(cnt[25] >= 3){
                cnt[25] -= 3, cnt[arr[i]]++;
            }
            else {
                no;
                return;
            }
        }
        else {
            no;
            return;
        }
    }
    yes;
}

int32_t main(){
    optimize();
    int t = 1;  
    // cin >> t;
    for(int tc = 1; tc <= t; tc++){
        solve(tc);
    }

    return 0;
}