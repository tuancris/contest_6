#include <bits/stdc++.h>
using namespace std;

void solve(int a[], int n) {
    int result[n];
    for(int i=0; i<n ; i++) 
        result[i] = 1; 
    int f = 0, l = n-1;
    for(int i=0; i<n ; i++) {
        if(a[i] == 0) {
          result[f] = 0;
          f++;
        }
        if(a[i] == 2) {
          result[l] = 2;
          l--;
        }
    }
    for(int i=0; i<n ; i++) 
        cout << result[i] << " ";
    cout << endl;
}
int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n; int a[n];
        for(int i=0; i<n; i++) cin >> a[i];
        solve(a,n);
    }
    return 0;
}
 