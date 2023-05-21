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


bool nt(int n){
    for (int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return false;
    }
    return n>1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    map<int,int> v;
    int t;
    vector<int> res;
    while(cin >> t){
        if(nt(t)) {
            res.push_back(t);
            v[t]++;
        }
    }
    for (auto x : res){
        if(v[x] != 0){
            cout << x << " " << v[x] << endl;
        }
        v[x] = 0;
    }



}
