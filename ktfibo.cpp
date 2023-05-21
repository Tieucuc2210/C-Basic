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

int isfibo[1001];

void init(){
    ll fibo[100];
    fibo[0] = 0; fibo[1] = 1;
    for(int i = 2; i <= 20; i++){
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    for(int i = 0; fibo[i] <= 1000; i++){
        isfibo[fibo[i]] = 1;
    }
}

int main(){
    init();
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int TC; cin >> TC;
    while(TC--){
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++){
            if(isfibo[a[i]]){
                cout << a[i] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
