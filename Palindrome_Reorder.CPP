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
  string str;
  sf(str);
  int n=str.length();
  int a[26];
  fill(a,a+26,0);
  in(i,n)
  {
      a[str[i]-65]++;
  }
  int odd=-1;
  in(i,26)
  {
      if(a[i]%2!=0)
      {
          if(odd!=-1)
          {
              pf("NO SOLUTION");
              return 0;
          }
          odd=i;
      }
  }
  int left=0,right=n-1;

  vector<int> ans(n);
  in(i,26)
  {
      if(a[i]==0||a[i]%2!=0)continue;
      while(a[i])
      {
          ans[left++]=i+65;
          ans[right--]=i+65;
          a[i]-=2;
      }
  }
  while(odd!=-1&&a[odd]>0)
  {

      ans[left++]=odd+65;
      ans[right--]=odd+65;
      a[odd]-=2;
  }
  for(auto e:ans)
  {
      char c=e;
      cout<<c;
  }
}
