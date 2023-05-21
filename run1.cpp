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
    for (int i =2; i<= sqrt(n) ; i++){
        if(n % i == 0) return false;
    }
    return n>1;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n , m; cin >> n >> m;
    int a[n][m];
    for (int i=0 ;i < n ;i++){
        for (int j =0; j < m ;j++){
            cin >> a[i][j];
        }
    }
    for (int i =0 ; i < n ;i++){
        for (int j = 0 ;j < m ;j++){
            if(check(a[i][j])){
                cout << a[i][j] << " ";
            }

        }
        cout << endl;
    }
}

