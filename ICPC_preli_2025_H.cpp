#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define int ll

void solve(int tc)
{
    int n, m; cin >> n >> m;
    set<int> arr;
    for(int i = 0; i < n; i++) { // n
        int a;  cin >> a;
        arr.insert(a);
    }
    map<int, int> mp; // log n
    vector<pair<int, pair<int, int>>> vp;
    for(int i = 0; i < m; i++) { // m
        int x, y, z;
        cin >> x >> y >> z;
        mp[x]++, mp[y]++, mp[z]++;

        if((arr.find(x) != arr.end()) && (arr.find(y) != arr.end())) { // log n
            arr.insert(z);
        }
        else vp.push_back({x, {y, z}}); // 1
    }

    for(int i = 0; i < vp.size(); i++){ // m
        int x = vp[i].first;
        int y = vp[i].second.first;
        int z = vp[i].second.second;
        if((mp[x] >= 2 && mp[y] >= 2) || ((arr.find(x) != arr.end()) && (arr.find(y) != arr.end()))){
            arr.insert(z); // log m
        }
    }

    // for(auto u: arr) cout << u << " ";
    // cout << endl;
    cout << arr.size() << '\n';


    //tc = O(tc * n * log n ) => 500 * 1000 * 20 = 10 ^ 7
}

int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);

    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}