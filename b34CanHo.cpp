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
    int n ,m ,k; cin>> n >> m >> k;
    int a[n] , b[m];
    for (auto &x :a){
    	cin >> x;
    }
    for (auto &x : b){
    	cin >> x;
    }
    sort( a,a +n);
    int i =0 , j =0;
    int cnt =0;
    while(i < n && j <m){
    	if(abs(a[i] - b[j]) <= k){
    		cnt++;
    		i++; j++;
    	} else if(a[i] < b[j]){
    		i++;
    	} else j++;
    }
    cout << cnt;
}