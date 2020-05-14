#include <bits/stdc++.h> 
using namespace std; 
  
int a[1000];
void solve(){
    int n; cin >> n;
    for(int i=0; i<n; i++) cin >> a[i];
    sort(a,a+n);
    int j = n-1;
    int i = 0;
    while(i <= j){
        if(j == i) cout << a[j]<<" ";
        else cout << a[j] << " " << a[i] << " ";
        i++;
        j--;
    }
    cout << endl;
}
int main(){
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
  