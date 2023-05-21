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
    int n ,m; cin >> n >> m;
    int a[n] , b[m];
    for (auto &x : a){
        cin >> x;
    }
    for (auto &x : b){
        cin >> x;
    }
    int i =0 , j =0; ll cnt =0;
    while(i < n && j < m){
        if(a[i] < b[j]){
            i++; continue;
        } else if(a[i] > b[j]){
            j++; continue;
        }
        
        ll dem1 =0 ,dem2 =0;
        while (i < n && a[i] == b[j]){
            dem1++; i++;
        }
        int tmp = a[i-1];
        while( j < m && tmp == b[j]){
            dem2++; j++;
        }
        cnt += 1ll * dem1 * dem2;
    }
    cout << cnt;
}