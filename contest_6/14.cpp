#include<bits/stdc++.h>
#define max 1000000
using namespace std;

int f[max+5], n;
void sang() { 
    f[0] = f[1] = 0;
    for (int i=2; i<=max; i++) 
        f[i] = 1;
    for (int i=2; i<=max; i++) { 
        if (f[i] == 1) { 
            for (int j=2*i; j<=max; j+=i) 
                 f[j] = 0;
        } 
    } 
} 
int main() {
    int t; cin >> t;
    sang();
    while(t--) {
        cin >> n; 
        int k = 0;
        for (int i=2; i<n; i++) { 
            if (f[i] && f[n-i]) { 
                k = 1;
                cout << i << " " << (n-i) << endl; 
                break; 
            }
        } 
        if(k==0) cout << "-1" << endl;
    }
    return 0;
}