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
    int n; cin >> n;
    int a[n];
    for (int i =0 ;i < n ;i++){
        cin >> a[i];
    }
    sort( a,a + n);
    ll sum1 = 0 , sum2 =0;
    for (int i =0 ;i < n ;i++){
        if(i % 2 == 0) sum1 = sum1 * 10 + a[i];
        else sum2 = sum2 *10 + a[i];
    }
    cout << sum1 + sum2 << endl;
}
