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
    int n , k; cin >> n >> k;
    int a[n];
    for (auto &x : a){
    	cin >> x;
    }
    int sum = 0;
    for (int i= 0 ;i < k ;i++){
    	sum += a[i];
    }
    int res = sum; int id;
    for (int i = k ;i < n ;i++){
    	sum = sum - a[i-k] + a[i];
    	if(sum > res){
    		res = sum;
    		id = i - k + 1;
    	}
    }
    cout << res << endl;
    for (int i =0 ;i < k ;i++){
    	cout << a[id + i] << " ";
    }
}