#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
   ll n, m;
   cin >> n >> m;

   vector <ll> v(m);
   for(ll i = 0; i < m; i++)
      cin >> v[i];

   sort(v.begin(), v.end());
   v.push_back(n + v[0]);

   vector <ll> temp(m);
   for(ll i = 1; i < m + 1; i++)
      temp[i - 1] = v[i] - v[i - 1] - 1;
   
   sort(temp.rbegin(), temp.rend());
   
   ll hod = 0, cnt = 0;
   for(auto val : temp){
      val -= 2 * hod;

      if(val <= 0){
         continue;
      }
      else if(val <= 2){
         cnt++;
         hod++;
      }
      else{
         cnt = cnt + val - 1;
         hod += 2;
      }
   }

   cout << n - cnt << '\n';
}

int main(){
   int t;
   cin >> t;

   while(t--){
      solve();
   }
}