#include <bits/stdc++.h> 
#define ll long long
using namespace std; 
  
ll minMax(ll a1[], ll a2[], int n1,  int n2) { 
    sort(a1, a1 + n1); 
    sort(a2, a2 + n2);  
    return a1[n1 - 1] * a2[0]; 
} 
int main() {
    int t; cin >> t;
    while(t--) {
        int n1, n2; cin >> n1 >> n2; ll a1[n1], a2[n2];
        for(int i=0; i<n1; i++) cin >> a1[i];
        for(int i=0; i<n2; i++) cin >> a2[i];
        cout << minMax(a1,a2,n1,n2) << endl;
    }
    return 0;
}