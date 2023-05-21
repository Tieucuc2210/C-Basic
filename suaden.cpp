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
    int n , k , b; cin >> n >> k >> b;
    int a[10000000];
    for (int i=0;i < b ;i++){
    	int x; cin >> x;
    	a[x] = 1;
    }
    int cnt =0;
    for (int i = 1;i <= k ; i++){
    	if(a[i] == 1) cnt++;
    }
    int ans = cnt;
    for (int i = k +1; i <= n ;i++){
    	cnt = cnt - a[i-k] + a[i];
    	ans = min(ans , cnt);
    }
    cout << ans;
}