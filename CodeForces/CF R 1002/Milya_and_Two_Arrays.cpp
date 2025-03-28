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
    int n = 0;
    cin >> n;

    unordered_set<int> a, b;

    for (int i = 0; i < n; i++)
    {
      int num;
      cin >> num;
      a.insert(num);
    }

    for (int i = 0; i < n; i++)
    {
      int num;
      cin >> num;
      b.insert(num);
    }

    if (a.size() + b.size() > 3)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }

  return 0;
}