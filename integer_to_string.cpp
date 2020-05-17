#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define get(a) ll a; cin >> a;
#define show(a) cout << a << endl;
#define full(p) p.begin(), p.end()
#define sz(a) (ll)(a.size())
#define pb push_back

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.precision(10);
	cout<<fixed;
	////////////////////////////////
	get(a);
	string s = to_string(a);

	for (int i = 0; i < sz(s); ++i)
		{
		 if(s[i] == '9')
		 	cout << 1;
		 else if(s[i] == '1')
		 	cout << 9 ;
		 else
		 	cout << s[i] ;
		}	


	cout << endl;

	return 0;
}