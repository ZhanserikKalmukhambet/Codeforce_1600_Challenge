#include <bits/stdc++.h>

using namespace std;

int main(){
   int t;
   cin >> t;

   while(t--){
      int n;
      string s;
      cin >> n >> s;

      int res = 0;

      unordered_map <char, int> l, r;
      for(int i = 0; i < n; i++)
         r[s[i]]++;

      for(int i = 0; i < n; i++){
         l[s[i]]++;

         r[s[i]]--;

         if(r[s[i]] == 0)
            r.erase(s[i]);
         
         int l_sz = l.size(), r_sz = r.size();

         res = max(res, l_sz + r_sz);
      }

      cout << res << '\n';
   }
}