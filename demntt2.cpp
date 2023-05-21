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

int p[1000001];

void sang(){
    for (int i= 0; i<= 1000000; i++){
        p[i] = 1;
    }
    p[0] = p[1] = 0;
    for (int i=2; i <= sqrt(1000000); i++){
        if(p[i]){
            for (int j =i *i ; j <= 1000000 ; j += i){
                p[j] = 0;
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int a[n][n];
    for (int i=0 ;i < n ;i++){
        for (int j=0 ;j < n ; j++){
            cin >> a[i][j];
        }
    }
    int cnt =0;
    for (int i =0 ;i < n;i++){
        if(p[a[i][i]]){
            cnt++;
            p[a[i][i]] = 0;
        }
        if(p[a[i][n-i-1]]){
            cnt++;
            p[a[i][n-i-1]] = 0;
        }
    }
    cout << cnt;
}
