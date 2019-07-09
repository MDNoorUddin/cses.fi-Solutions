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

int n,m;
vector<string> b(1001);
int s1=-1,s2=-1,e1=-1,e2=-1;
vector<string> ans;
int main() {

  ios::sync_with_stdio(false);
  cin.tie(0);
  string str;
  set<string> st;
  sf(str);
  sort(str.begin(),str.end());
  do{
        st.insert(str);
  }while(next_permutation(str.begin(),str.end()));
  pf(st.size());
  for(auto e:st)
  {
      pf(e);
  }
}
