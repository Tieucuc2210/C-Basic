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



int cnt[10009];


bool nt(int n){
    for (int i =2; i<= sqrt(n) ; i++){
        if(n % i == 0) return false;
    }
    return n>1;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int cnt =0;
        int a, b; cin >> a >> b;
        for (int i = a ; i <= b; i++){
            if(nt(i)) cnt++;
        }
        cout << cnt << endl;
    }
}
