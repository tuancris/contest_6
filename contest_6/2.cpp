#include <bits/stdc++.h> 
using namespace std; 
  
void solve(int a[], int n, int x) { 
    for (int i=1; i<n; i++) { 
        int k = abs(a[i] - x); 
        int j = i - 1; 
        if (abs(a[j] - x) > k) { 
            int temp = a[i]; 
            while (abs(a[j] - x) > k && j >= 0) { 
                a[j + 1] = a[j]; 
                j--; 
            } 
            a[j + 1] = temp; 
        } 
    } 
    for (int i=0; i<n; i++) 
         cout << a[i] << " "; 
    cout << endl;
} 
int main() {
    int t; cin >> t;
    while(t--) {
        int n, x; cin >> n >> x; int a[n];
        for(int i=0; i<n; i++) cin >> a[i];
        solve(a, n, x);
    }
    return 0;
}