#include <bits/stdc++.h>
using namespace std;

void qs(int a[], int left,int right) {
    int i,j, x,y;
    i=left; j=right;
    x= a[(left+right)/2];
    do {
        while(a[i]<x && i<right) i++;
        while(a[j]>x && j>left) j--;
        if(i<=j) {
           y=a[i];a[i]=a[j];a[j]=y;
           i++;j--;
        }
    }
    while (i<=j);
    if (left<j) qs(a,left,j);
    if (i<right) qs(a,i,right);
}
int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n; int a[n];
        for(int i=0;i<n;i++)  cin >>a[i];
        qs(a,0,n-1);
        for(int i=0; i<n; i++)
           cout<<a[i] << " ";
        cout << endl;
    }
    return 0;
}