#include <bits/stdc++.h>

using namespace std;

void solve(){
   string s;
   cin >> s;

   int n = s.size();

   unordered_map <int, int> mp;
   for(int i = 0; i < n; i++)
      mp[s[i]]++;
   
   if(mp.size() == 1 || mp.size() == n){
      cout << "YES" << '\n';
      return;
   }

   for(int i = 0; i < n - 1; i++){
      if(s[i] == s[i + 1]){
         cout << "NO" << '\n';
         return;
      }
   }

   if(s[0] == s[n - 1] && mp[s[0]] == 2){
      bool ok = true;

      for(int i = 1; i < n - 1; i++){
         if(mp[s[i]] != 1){
            ok = false;
            break;
         }
      }

      if(ok){
         cout << "YES" << '\n';
         return;
      }
   }

   cout << "NO" << '\n';
}

int main(){
   int t;
   cin >> t;

   while(t--){
      solve();
   }
}