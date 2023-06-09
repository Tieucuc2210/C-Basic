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



int dx[8] = {-2 ,-2 , -1 , -1 , 1 , 1 , 2 ,2};
int dy[8] = {-1 , 1 , - 2 , 2 , -2 , 2 , -1 , 1};

int n; int a[101][102];
int s , t , u , v;

void Try(int i , int j){
    a[i][j] = 0;
    for (int k =0 ; k < 8 ; k++){
        int imoi = i + dx[k];
        int jmoi = j + dy[k];
        if (imoi >= 1 && imoi <= n && jmoi >=1 && jmoi <= n && a[imoi][jmoi]){
            Try(imoi , jmoi);
        }
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    cin >> s >> t >> u >> v;
    for (int i =1;i <= n ;i++){
        for (int j = 1; j <= n ;j++){
            cin >> a[i][j];
        }
    }
    Try(s , t);
    if (a[u][v]) cout << "NO";
    else cout << "eys";
}
