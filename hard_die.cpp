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



bool check(int a[] , int n){
    int c25 =0 , c50 = 0;
    for (int i = 0 ;i < n ;i++){
        if(a[i] == 25) c25++;
        else if(a[i] == 50) {
            if(c25 == 0) return false;
            else {
                c25--;
                c50++;
            }
        } else {
            if(c25 == 0 || (c25 * 25 + c50 * 50) < 75) return false;
            else if(c25 != 0){
                c25 -=2;
                c50--;
            } else c25 -=3;
        }
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int a[n];
    for (int i =0 ;i < n;i++){
        cin >> a[i];
    }
    if(check( a, n)) cout << 1;
    else cout << 0;
   
}
