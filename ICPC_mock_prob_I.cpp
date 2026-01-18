#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define int ll

inline void solve(int tc){
    int n;  cin >> n;
    vector<int> arr(n);
    for(int &i: arr) cin >> i;

    int back[n] = {}, front[n] = {};

    /*
    front:
        1. L -> R
        2. max
        3. max == arr[i] -> i set in front array
        4. max != arr[i] -> 0 set in front array
        5. mapping
    */
    int mx = 0;
    map<int, int> freq;
    for(int i = 0; i < n; i++){
        mx = max(mx, arr[i]);
        if(mx == arr[i] && freq[arr[i]] == 0) front[i] = i;
        else front[i] = 0;

        freq[arr[i]]++;
    }

    /*
    back: 
        1. L -> R
        2. max
        3. add max value frequency in back array. 
    */
    mx = 0;
    freq.clear();
    for(int i = 0; i < n; i++) {
        mx = max(mx, arr[i]);
        back[i] = freq[mx];
        freq[arr[i]]++;
    }

    /*
    Compare:
        1. front[i] == 0 -> disqualified
        2.back[i] == 0 and front[i] > 0 -> qualified
    */
    
    int ans = -1;
    for(int i = 0; i < n; i++) {
        if(back[i] == 0 && front[i]) {
            ans = i + 1;
            break;
        }
    }

    if(ans != -1) cout << "Case " << tc << ": " << ans << '\n';
    else cout << "Case " << tc << ": " << "Humanity is doomed!\n";

    //time complexity: 
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}