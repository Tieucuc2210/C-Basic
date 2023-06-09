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


int cnt[10000];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        memset(cnt ,0 , sizeof(int));
        for (auto &x : a){
            cin >> x;
            if(x > 0) cnt[x] =1;
        }
        for(int i=1 ;i <= 1e6 + 1; i++){
            if(!cnt[i]){
                cout << i << endl;
                break;
            }
        }

    }
}
