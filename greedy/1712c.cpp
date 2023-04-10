#include <bits/stdc++.h>

using namespace std;

void solve(){
   int n;
   cin >> n;

   vector <int> a(n);

   for(int i = 0; i < n; i++){
      cin >> a[i];
   }

   vector <int> temp;
   unordered_map <int, int> mp;
   int cnt = 0;

   for(int i = 0; i < n - 1; i++){
      if(mp[a[i]])
         a[i] = 0;
      
      if(mp[a[i + 1]])
         a[i + 1] = 0;
      
      temp.push_back(a[i]);

      if(a[i] > a[i + 1]){
         while(temp.size()){
            mp[temp.back()]++;

            temp.pop_back();
         }
      }
   }

   for(auto it : mp)
      if(it.first != 0 && it.second)
         cnt++;

   cout << cnt << '\n';
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