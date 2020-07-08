#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define get(a) ll a; cin >> a;
#define show(a) cout << a << endl;
#define full(p) p.begin(), p.end()
#define sz(a) (ll)(a.size())
#define pb push_back


bool valid(int n)
{
	string s = to_string(n);

	return (s.find_first_not_of(s[0]) == string::npos); 
}



int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.precision(10);
	cout<<fixed;
	////////////////////////////////
	get(n);

	while(true)
	{
		if(valid(n))
			{cout << n << endl; break;}
		else
			n++;
	}	

	return 0;
}