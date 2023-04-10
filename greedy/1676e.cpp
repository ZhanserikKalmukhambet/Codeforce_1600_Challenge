#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair

int bin_search(ll * a, int l, int r, ll tar){
   int pos, mid;

   while(l <= r){
      mid = (l + r) / 2;

      if(a[mid] < tar)
         l = mid + 1;
      else{
         pos = mid;
         r = mid - 1;
      }      
   }

   return pos;
}

void solve(){
   int n, q;
   cin >> n >> q;

   ll a[n];
   for(int i = 0; i < n; i++)
      cin >> a[i];

   sort(a, a + n);
   reverse(a, a + n);

   for(int i = 1; i < n; i++)
      a[i] += a[i - 1];

   while(q--){
      ll x;
      cin >> x;

      if(a[n - 1] < x)
         cout << -1;
      else
         cout << bin_search(a, 0, n - 1, x) + 1;
      
      cout << '\n';
   }
}

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int t;
   cin >> t;

   while(t--){
      solve();
   }
}