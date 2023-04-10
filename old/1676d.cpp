#include <bits/stdc++.h>

using namespace std;

const int N = 222;

int a[N][N];

long long up(int i, int j, int n, int m){
   long long res = 0;

   int x = i - 1, y = j - 1;

   while(x >= 0 && y >= 0)
      res += a[x--][y--];

   while(i >= 0 && j < m)
      res += a[i--][j++];
   
   return res;
}

long long down(int i, int j, int n, int m){
   long long res = 0;

   int x = i + 1, y = j + 1;

   i++; j--;

   while(x < n && y < m)
      res += a[x++][y++];

   while(i < n && j >= 0)
      res += a[i++][j--];
   
   return res;
}


int main(){
   int t;
   cin >> t;

   while(t--){
      int n, m;
      cin >> n >> m;

      for(int i = 0; i < n; i++)
         for(int j = 0; j < m; j++)
            cin >> a[i][j];

      
      long long sum = -1;

      int x = 0, y = 0;

      for(int i = 0; i < n; i++){
         for(int j = 0; j < m; j++){
            long long temp = up(i, j, n, m) + down(i, j, n, m);

            sum = max(sum, temp);
         }
      }

      cout << sum << '\n';
   }
}