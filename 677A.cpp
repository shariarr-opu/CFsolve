#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define lld long long double
#define optimize()                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0);
// stl function.
#define pb push_back
#define pp pop_back
#define ins insert
#define pii pair<int, int>
#define psi pair<string, int>
using namespace std;
int main()
{
    int n , h;
    cin >> n >> h;
    int a[n];
    int sum = 0;
    for( int i = 0; i < n; i++ ){
        cin >> a[i];
        if( a[i] > h ) sum += 2;
        else sum++;
    }
    cout << sum << endl;
}