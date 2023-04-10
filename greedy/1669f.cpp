#include <bits/stdc++.h>

using namespace std;

void solve(){
   int n;
   cin >> n;

   int a[n];
   for(int i = 0; i < n; i++)
      cin >> a[i];

   if(n == 1){
      cout << 0 << '\n';
      return;
   }

   int l_bound = 0, r_bound = n - 1;

   int l = 0, r = n - 1;

   int sum1 = a[l], sum2 = a[r];

   int cnt = 0;

   while(l <= r){
      // cout << sum1 << ' ' << sum2 << '\n';

      if(sum1 < sum2){
         l++;
         sum1 += a[l];
      }
      else if(sum1 > sum2){
         r--;
         sum2 += a[r];
      }
      else{
         cnt = cnt + (r_bound - r + 1) + (l - l_bound + 1);
         
         // cout << l << ' ' << r << ' ' << cnt << '\n';
         
         l++; r--;

         if(l == r)
            break;

         sum1 = a[l];
         sum2 = a[r];

         l_bound = l, r_bound = r;
      }
   }

   cout << cnt << '\n';
}

int main(){
   int t;
   cin >> t;

   while(t--){
      solve();
   }
}