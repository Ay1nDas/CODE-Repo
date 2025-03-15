#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io                 \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define all(x) (x).begin(), (x).end()
int mod = 1000000007;

int main()
{

  fast_io;
  int T;
  cin >> T;
  while (T--)
  {
    int n, q;
    cin >> n >> q;

    vector<int> vec(n);

    for (int i = 0; i < n; i++)
      cin >> vec.at(i);

    while (q--)
    {
      int l, r;
      cin >> l >> r;
      l--;
      r--;

      int val{0};

      for (int i = l; i <= r; i++)
        val = val | vec.at(i);

      cout << val << endl;
    }
  }

  return 0;
}