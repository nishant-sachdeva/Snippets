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
	string s; cin >> s;

	int index = s.find_first_of('A');

	int final = s.find_last_of('Z');

	cout << final - index + 1 << endl;	

	return 0;
}