#include <bits/stdc++.h> 
using namespace std; 
  
int search(int a[], int l, int h, int k) { 
    if (l > h) return -1; 
    int mid = (l+h)/2; 
    if (a[mid] == k) return mid; 
    if (a[l] <= a[mid]) { 
        if (k >= a[l] && k <= a[mid]) 
            return search(a, l, mid-1, k); 
        return search(a, mid+1, h, k); 
    } 
    if (k >= a[mid] && k <= a[h]) 
        return search(a, mid+1, h, k); 
    return search(a, l, mid-1, k); 
} 
int main() {
    int t; cin >> t;
    while(t--) {
        int n,k; cin >> n >> k; int a[n];
        for(int i=0; i<n; i++) cin >> a[i];
        int i = search(a, 0, n-1, k); 
        if (i != -1) cout << i+1 << endl; 
        else break;
    }
    return 0;
}