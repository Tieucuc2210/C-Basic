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
    int n ,  k; cin >> n >> k;
    int a[n];
    for (auto &x : a){
        cin >> x;
    }
    int dem =1; int cnt =0;
    for (int i =1; i < n ;i++){
        if(a[i-1] -a[i] <= k){
            dem++;
        } else {
            dem = 1;
        }


    }
    cout <<dem << endl;
}
