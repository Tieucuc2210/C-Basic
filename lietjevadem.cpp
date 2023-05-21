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



bool check(int n){
    int v = n % 10; n /= 10;
    while(n != 0){
        int res= n % 10;
        if(v < res) return false;
        n /= 10;
    }

    return true;
}


bool cmp(pair<int,int> a  , pair<int,int> b){
    if(a.second == b.second){
        return a.first <  b.first;
    }
    return a.second > b.second;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    vector<pair<int,int>> v;
    map<int,int> mp;
    while(cin >> t){
        if(check(t)) mp[t]++;
    }
    for (auto x : mp){
        v.push_back({x.first , x.second});
    }
    sort(v.begin() , v.end() , cmp);
    for (auto x : v){
        cout << x.first << " " << x.second << endl;
     }
}
