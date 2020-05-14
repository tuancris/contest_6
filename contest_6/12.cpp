#include <bits/stdc++.h> 
using namespace std; 
  
void solve(int a[], int n, int k) {  
    sort(a, a + n, greater<int>()); 
    for (int i = 0; i<k; i++) 
        cout << a[i] << " "; 
    cout << endl;
} 
int main() {
    int t; cin >> t;
    while(t--) {
        int n,k; cin >> n >> k; int a[n];
        for(int i=0; i<n; i++) cin >> a[i];
        solve(a,n,k);
    }
    return 0;
}