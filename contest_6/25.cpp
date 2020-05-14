#include <bits/stdc++.h> 
using namespace std; 
  
void solve(int a[], int n)  {  
    int first, second;  
    if (n<2) return;  
    first = second = INT_MAX;  
    for (int i=0; i<n ; i++)  {  
        if (a[i] < first)  {  
            second = first;  
            first = a[i];  
        }  
        else if (a[i] < second && a[i] != first)   second = a[i];  
    }  
    if (second == INT_MAX)   cout << "-1" << endl;  
    else cout << first << " " << second << " " << endl;
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