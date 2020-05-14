#include <bits/stdc++.h>
#define max 100000
using namespace std;

int b[max];
int dem(int a[],int n,int x){
    for(int i=0; i<max; i++)
        b[i]=0;
    for(int i=0; i<n; i++)
        b[a[i]]++;
    if(b[x]==0) return -1;
    else return b[x];
}
int main() {
    int t; cin >> t;
    while(t--) {
        int n,x; cin >> n >> x; int a[n];
        for(int i=0; i<n; i++) cin >> a[i];
        cout << dem(a,n,x) << endl;
    }
    return 0;
}