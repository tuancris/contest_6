#include<bits/stdc++.h> 
using namespace std; 
  
int tinh(int arr[] , int n) {       
    vector<pair<int,int>> vec(n); // khai bao 1 vector cap
    for(int i=0;i<n;i++) { 
        vec[i].first=arr[i]; // tao vec[i] thu nhat = gia tri mang
        vec[i].second=i;     // tao vec[i] thu 2 = chi so mang
    } 
    sort(vec.begin(),vec.end()); // sap xep lai vector
    int ans=0,c=0,j; 
    for(int i=0;i<n;i++)  {    
        if(vec[i].second==i)  continue; // kiem tra chi so có bang gia tri ko 
        else { 
            swap(vec[i].first,vec[vec[i].second].first); 
            swap(vec[i].second,vec[vec[i].second].second);  
        }   
        if(i!=vec[i].second)  --i;  
        ans++; 
    } 
    return ans; 
} 
int main() { 
   int t ; cin >> t;
   while(t--) {
       int n; cin >> n; int arr[n];
       for(int i=0; i<n; i++) cin >> arr[i];
       cout << tinh(arr,n) << endl;
   }
   return 0; 
}  










// https://www.geeksforgeeks.org/minimum-number-of-swaps-required-to-sort-an-array-set-2/?ref=rp