#include <bits/stdc++.h>

using namespace std;

int main(){
   int n;
   cin >> n;

   int a[n];
   for(int i = 0; i < n; i++)
      cin >> a[i];

   int d = a[1] - a[0];

   bool ok = true;
   for(int i = 2; i < n; i++){
      if(a[i] - a[i - 1] != d){
         ok = false;
         break;
      }
   }

   if(ok)
      cout << a[n - 1] + d;
   else
      cout << a[n - 1];

   return 0;
}