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



bool solve(){
	int n , k , t; cin >> n >> k >> t;
	int a[n];
	for (auto &x : a){
		cin >> x;
	}
	multiset<int> v;
	for (int j = 0 ; j < k ;j++){
		auto it = v.lower_bound(a[j] - t);
		if(it != v.end() && (*it <= a[j] + t)) return true;
		v.insert(a[j]);
	}
	for (int j = k ;j < n ; j++){
		v.erase(v.find(a[j- k]));
		auto it = v.lower_bound(a[j] - t);
		if(it != v.end() && (*it <= a[j] + t)) return true;
		v.insert(a[j]);
	}
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    if(solve()) cout << "YES" << endl;
    else cout << "NO" << endl;
}