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
    for (int i= 2; i <= sqrt(n) ; i++){
        if(n % i == 0) return 0;
    }
    return n>1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int a[n];
    for (auto &x : a){
        cin >> x;
    }
    int _max = 0 , id1 , id2 , _min = INT_MAX , _nt =0;
    for (int i=0 ;i < n ;i++){
        if(a[i] > _max){
            _max = a[i];
            id1 = i;

        }
        if(a[i] <= _min){
            _min = a[i];
            id2 = i;
        }
        if(nt(a[i])) _nt++;
    }



    int z1 =0 , z2 =0; bool ok = true; int tich = 1;
    for (int i=0 ; i < n ;i++){
        tich *= a[i];
        tich %= MOD;
        if(a[i] > z1){
            z2 = z1;
            z1 = a[i];
        }
        if(a[i] > z2){
            z2 = a[i];
        }
        if(a[i] != a[n- i +1]) ok = false;
    }
    cout << _max << " " << id1  << endl;
    cout << _min << " " << id2 << endl;
    cout << _nt << endl;
    cout << z1 * z2 << endl;
    if(ok == true) cout << "Yes" << endl;
    else cout << "NO" << endl;
    cout << tich << endl;
}
