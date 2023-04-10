#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
   ll t;
   cin >> t;

   while(t--){
      ll n;
      string s;

      cin >> n >> s;

      if(n == 1){
         cout << 0 << '\n';
         continue;
      }

      ll initial = 0;
      for(ll i = 0; i < n; i++){
         if(s[i] == 'L')
            initial += i;
         else
            initial += n - i - 1;
      }

      vector <ll> a;
      for(ll i = 0; i < n; i++){
         if(i < n / 2 && s[i] == 'L')
            a.push_back(n - i - 1);
         else if(i >= n / 2 && s[i] == 'R')
            a.push_back(i);
      }    

      if(a.size() == 0){
         for(int i = 0; i < n; i++)
            cout << initial << ' ';

         cout << '\n';

         continue;
      } 

      vector <ll> res(n);
      ll l = 0, r = a.size() - 1, k = 0;
      while(l <= r){
         if(a[l] > a[r]){
            initial = initial + a[l] - (n - 1 - a[l]);
            l++;
         }
         else{
            initial = initial + a[r] - (n - 1 - a[r]);
            r--;
         }

         res[k] = initial;
         k++;
      }

      while(k != n){
         res[k] = res[k - 1];
         k++;
      }

      for(auto val : res)
         cout << val << ' ';

      cout << '\n';
   }     
}