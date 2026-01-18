#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool check(string s){
    int l = 0, r = s.size();
    while(l <= r){
        if(s[l] != s[r]) return 0;
        l ++, r --;
    }
    return 1;
}

void solve(int tc){
    int n;  cin >> n;
    string s;   cin >> s;

    for(int i = 0; i < n; i++){
        if(s[i] == '0'){
            int l = i, r = i;
            while(
                
            )
        }
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