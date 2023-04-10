#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair

void solve(){
   int n;
   cin >> n;

   vector <pair<ll, ll>> a(n);

   for(int i = 0; i < n; i++)
      cin >> a[i].first;
   for(int i = 0; i < n; i++)
      cin >> a[i].second;

   sort(a.begin(), a.end());

   for(auto p : a)
      cout << p.first << ' ' << p.second << '\n';

   bool used[n];
   for(int i = 0; i < n; i++)
      used[i] = 0;

   int l = 0, cnt = 0;

   bool found = true;

   while(found){
      found = false;

      for(int r = n - 1; r > l; r--){
         if(used[r] == 0 && a[l].second + a[r].second >= a[l].first + a[r].first){
            used[r] = 1;

            l++;
            cnt++;

            found = true;

            break;
         }
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