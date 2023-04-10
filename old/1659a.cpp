#include <bits/stdc++.h>

using namespace std;

int main(){
   int t;
   cin >> t;

   while(t--){
      int n, r, b, temp;
      cin >> n >> r >> b;

      string s = "", t = "";

      int block = r / (b + 1);
      int rem = r % (b + 1);

      for(int i = 0; i < rem; i++)    
         cout << string(block + 1, 'R') <<'B';
   
      for(int i = rem; i < b; i++)    
         cout << string(block, 'R') << 'B';

      cout<<string(block,'R');
      
      cout << '\n';
   }
}