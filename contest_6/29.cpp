#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> v; v.resize(n);
    for(int i=0; i<n; i++) cin >> v.at(i);
    for(int i=0; i<n-1; i++) {
        bool kiemtra = false;
        for(int j=0; j<n-1; j++) {
            if(v.at(j) > v.at(j+1)) {
               swap(v.at(j), v.at(j+1));
               kiemtra = true;
            } 
        }
        if(!kiemtra) break;
        cout << "Buoc " << i+1 << ": ";
        for(int t=0; t<n; t++)
            cout << v.at(t) << " ";
        cout << endl;
    }
}
int main() {
            solve();
            return 0;
}