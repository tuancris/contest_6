# include<bits/stdc++.h>
#define ll long long 
using namespace std;

vector<ll > a;
int ok[20]; ll c;
void chuyen(){
    while(c){
        int b = c % 10;
        ok[b]++;
        if(ok[b]==1) a.push_back(b);
        c/=10;
    }
}
void solve(){
    int n, m; cin >> n;
    a.clear();
    memset(ok,0,sizeof(ok));
    for(int i=0; i<n; i++){
        cin >> c;
        chuyen();
    }
    sort(a.begin(), a.end());
    for(int i=0;i<a.size(); i++){
        cout << a[i] << " ";
    }
    cout << endl;


}
int main(){
    int t; cin >> t;
    while(t--) solve();
    return 0;
}