#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#include <functional> // for less
#include <iostream>
using namespace __gnu_pbds;
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


typedef tree<int, null_type, less<int>, rb_tree_tag,
             tree_order_statistics_node_update>
    new_data_set;


int main() {

  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin>>n;
  vector<int> a(n+1);
  new_data_set p;
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
      p.insert(i);
  }
  int x;
  for(int i=1;i<=n;i++)
  {
      cin>>x;
      x--;
      int id=*p.find_by_order(x);
      //cout<<id<<endl;
      cout<<a[id];ps();//cout<<id<<endl;
      p.erase(id);
      //cout<<"size "<<p.size()<<endl;
  }
}
