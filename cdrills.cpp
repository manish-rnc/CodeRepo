#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin >> n;
    cin.ignore(256,'\n');
    vector<string> v;
	for(int i = 0; i < n; i++)
	{
		string s;
		getline(cin,s);
		v.push_back(s);
	}
    long long count = 0;
    for(int i=0;i<n;i++)
    {
        stringstream ss;
        ss<<v[i];

        long long c = 1;
        string word;
        while(ss >> word)
        {
            if(c == 3)
                count += (stoi(word) + 1);
            c++;
        }
    }
    cout<<count<<endl;
}
int main()
{
#ifndef ONLINE_JUDGE    
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif    
	int t;
	cin >> t;
	while(t--)
		solve();

    return 0;    
}