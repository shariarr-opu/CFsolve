#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(int tc){
    int n;  cin >> n;
    vector<int> arr(n);
    for(int &i : arr) cin >> i;

    if(n > 2) cout << "NO\n";
    else {
        if(abs(arr[0] - arr[1]) == 1) cout << "NO\n";
        else cout << "YES\n";
    }

    //time complexity: 
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}