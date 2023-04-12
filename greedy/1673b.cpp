#include <bits/stdc++.h>

using namespace std;

void solve(){
   string s;
   cin >> s;

   int n = s.size(), k;

   unordered_map<char, int> mp;

   for(k = 0; k < n; k++){
      if(!mp[s[k]])
         mp[s[k]] = 1;
      else
         break;
   }

   bool ok = true;

   for(int i = k; i < n; i++){
      if(s[i] != s[i - k])
         ok = false;
   }

   if(ok)
      cout << "YES" << '\n';
   else
      cout << "NO" << '\n';
}

int main(){
   int t;
   cin >> t;

   while(t--){
      solve();
   }
}