#include<bits/stdc++.h>


using namespace std;
using ll = long long;
using db = double;
#define MAX_SIZE 1e7
#define MIN_SIZE -1e7

const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+1;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for (int i=0 ;i< n ;i++){
            cin >> a[i];
        }
        int _max = 0;
        for (int i=1; i < n ;i++){
            if(a[i] > a[i-1]){
                _max = max(_max , a[i] - a[i-1]);
            }
        }

        if(_max == -1e9) cout << -1 << endl;
        else cout << _max << endl;
    }
}
