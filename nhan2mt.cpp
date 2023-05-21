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
    int n , m , z; cin >> n >> m >> z;
    int a[n][m] , b[m][z] , c[n][z];
    for (int i=0 ;i < n ; i++){
        for (int j =0 ; j < m ; j++){
            cin >> a[i][j];
        }
    }
    for (int i = 0 ;i < m ;i++){
        for (int j = 0 ; j < z ; j++){
            cin >> b[i][j];
        }
    }
    for (int i =0 ;i < n ;i++){
        for (int j =0 ;j < z; j++){
            c[i][j] = 0;
            for (int k =0 ; k < m ; k++){
                c[i][j] += a[i][k]  * b[k][j];
            }
        }
    }
    for (int i =0 ;i < n ;i++){
        for (int j =0 ; j < z ; j++){
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}
