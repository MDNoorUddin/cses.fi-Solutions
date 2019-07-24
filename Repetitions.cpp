#include<bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
void ans(ll n)
{
    cout<<n<<" ";
    if(n==1)return;
    if(n%2==0)
    {
        n/=2;
    }
    else
    {
        n=n*3;
        n++;
    }
    ans(n);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    //cout.tie(0);
    string str;
    cin>>str;
    int count=1;
    for(int i=0;i<str.length()-1;)
    {
        if(str[i]==str[i+1])
        {
            int tmp=1;
            for(int j=i+1;j<str.length();j++)
            {
                if(str[i]!=str[j])
                {
                    break;
                }
                else
                {
                    tmp++;
                }
            }
            i+=tmp;
            count=max(count,tmp);
            continue;
        }
        i++;
 
    }
    cout<<count<<'\n';
}
