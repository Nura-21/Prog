#include <bits/stdc++.h>
using namespace std;
int n,m,x,ans,cnt;
int main()
{
    cin >> n >> m >> x;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
		for(int j=0;j<m;j++)
    	{
    		cin >> a[i][j];
    		if(a[i][j]==x)
    		{
    			cnt++;
			}
		}
		if(cnt!=0)
		{
			ans++;
		}
		cnt =0;
	}
	cout << ans;
}
