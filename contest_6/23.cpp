#include <bits/stdc++.h>
using namespace std;

int timso(int a[],int n){
	int s = (n*(n+1))/2;
	for(int i=0;i<n-1;i++)
		s = s - a[i];
	return s;
}
int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n; int a[n];
        for(int i=0; i<n-1; i++) cin >> a[i];
        cout << timso(a,n) << endl;
    }
    return 0;
}