#include <bits/stdc++.h>
using namespace std;

/*int dem(int a[],int n, int k) {
    map<int,int>m;
    int count = 0;
    for(int i=0; i<n; i++) {
      count = count + m[k-a[i]];
       m[a[i]]++;
    }
    return count;
}*/
int dem(int a[], int n, int k) {
    int count = 0; 
    for (int i = 0; i < n; i++) {        
        for (int j = i+1; j < n; j++) 
            if (a[i] + a[j] == k )   count++; 
    } 
    return count; 
}

int main() {
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k; int a[n];
        for(int i=0; i<n; i++) cin >> a[i];
        cout << dem(a,n,k) << endl;
    }
    return 0;
}