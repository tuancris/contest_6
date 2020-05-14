#include <bits/stdc++.h> 
using namespace std; 
  
void giao(int a1[], int a2[], int m, int n) { 
  int i = 0, j = 0; 
  while (i < m && j < n) { 
    if (a1[i] < a2[j]) 
       cout << a1[i++] << " "; 
    else if (a2[j] < a1[i]) 
       cout << a2[j++] << " "; 
    else { 
       cout << a2[j++] << " "; 
       i++; 
    } 
  } 
  while(i < m)  cout << a1[i++] << " "; 
  while(j < n) cout << a2[j++] << " "; 
} 
void hop(int a1[], int a2[], int m, int n) { 
  int i = 0, j = 0; 
  while (i < m && j < n) { 
    if (a1[i] < a2[j])  i++; 
    else if (a2[j] < a1[i])  j++; 
    else { 
       cout << a2[j] << " "; 
       i++; 
       j++; 
    } 
  } 
} 
int main() {
    int t; cin >> t;
    while(t--) {
        int m, n; cin >> m >> n; int a1[m], a2[n];
        for(int i=0; i<m; i++) cin >> a1[i];
        for(int i=0; i<n; i++) cin >> a2[i];
        giao(a1,a2,m,n);
        cout << endl;
        hop(a1,a2,m,n);
        cout << endl;
    }
    return 0;
}

