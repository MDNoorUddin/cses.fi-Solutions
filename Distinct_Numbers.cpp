#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pf(n) cout << n << endl
#define ps() cout <<" ";
#define sf(n) cin >> n
#define in(i,n) for (int i = 0; i < n; i++)
#define vi vector<int>
#define vp vector<pair<int, int>>
#define graph vector< vector<int> >
#define vs vector<string>
/**  '' "\n" ^ **/
int main() {

  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  sf(n);
  vector<int> ans(n);
  in(i,n)
  {
      sf(ans[i]);
  }
  sort(ans.begin(),ans.end());
  int count=0;
  for(int i=0;i<n;i++)
  {
      count++;
      int temp=0;
      for(int j=i+1;j<n;j++)
      {

          if(ans[i]!=ans[j])
            break;
        temp++;
      }
      i+=temp;
  }
  pf(count);
}
