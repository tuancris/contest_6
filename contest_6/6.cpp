#include<bits/stdc++.h>
#define MAX 1000000
using namespace std;

int t, n, a[MAX];
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a + n);
		for(int i = 0; i < n; i++){
			cout << a[i] << " ";
		}
		cout<<endl;
	}
	return 0;
}

 
