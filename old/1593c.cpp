#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, k;
		cin >> n >> k;

		vector<int> a(k);

		for (int i = 0; i < k; i++) 
         cin >> a[i];

		sort(a.rbegin(), a.rend());

		int cnt = 0;
		long long sum = 0;

		while (cnt < a.size() && sum + n - a[cnt] < n)
		{
			sum += n - a[cnt++];
		}

		cout << cnt << '\n';
	}

	return 0;
}