#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
   int n;
   ll d;

   cin >> n >> d;

   ll p[n];
   for(int i = 0; i < n; i++)
      cin >> p[i];

   sort(p, p + n);

   ll sum = 0;
   int cnt = 0, l = 0, r = n - 1;

   while(l <= r){
      sum += p[r];

      if(sum > d){
         cnt++;
         r--;
         sum = 0;
      }
      else{
         l++;
      }
   }

   cout << cnt;
   return 0;
}