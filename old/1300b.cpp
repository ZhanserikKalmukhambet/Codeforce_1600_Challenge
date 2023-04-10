#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
   int t;
   cin >> t;

   while(t--){
      int n;
      cin >> n;

      n *= 2;

      ll a[n];
      for(int i = 0; i < n; i++)
         cin >> a[i];

      sort(a, a + n);

      cout << abs(a[n / 2] - a[ n / 2 - 1]) << '\n';
   }
}