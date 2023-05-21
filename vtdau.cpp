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



int dau(int a[] , int n , int k){
    int res= -1;
    int l =0 , r = n-1;
    while(l < r){
        int m = (l + r) /2;
        if(a[m] == k){
            res = m+1;
            r = m-1;
        } else if(a[m] < k){
            l = m +1;
        } else  r = m-1;
    }
    return res;
}


int cuoi(int a[] , int n , int k){
    int res= -1;
    int l =0 , r = n-1;
    while(l < r){
        int m = (l + r) /2;
        if(a[m] == k){
            res = m +1;
            l = m+1;
        } else if(a[m] < k){
            l = m +1;
        } else  r = m-1;
    }
    return res;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n , k; cin >> n >> k;
    int a[n];
    for (auto &x : a){
        cin >> x;
    }
    cout << dau(a , n , k) << " " << cuoi(a , n , k) << endl;
}
