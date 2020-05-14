#include <bits/stdc++.h> 
using namespace std; 
  
void hopmang(int a[], int b[], int res[], int n, int m)  { 
    int i = 0, j = 0, k = 0; 
    while (i < n) { 
        res[k] = a[i]; 
        i += 1; 
        k += 1; 
    } 
    while (j < m) { 
        res[k] = b[j]; 
        j += 1; 
        k += 1; 
    } 
    sort(res, res + n + m); 
}
int main() {
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m; int a[n], b[m], res[m+n];
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<m; i++) cin >> b[i];
        hopmang(a,b,res,n,m);
        for (int i=0; i<n + m; i++) 
            cout << res[i] << " ";
        cout << endl;
    }
    return 0;
}
  