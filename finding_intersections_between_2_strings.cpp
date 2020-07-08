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
	get(n);
	string s;
	cin >> s;

	int uni = 0;


	for(int i = 0; i<n ; i++)
	{
		// cout << "starting " ;

		string a = s.substr(0, i+1);
		string b = s.substr(i+1, n-1);

		std::vector<int> v(110);
		std::vector<int>::iterator it;
		// cout << i << " Reaching here" << endl;
		// cout << a <<  " " << b << endl;

		sort(full(a));
		sort(full(b));

		it = set_intersection(full(a), full(b), v.begin());

		int current = set<char>(v.begin(), it).size();
		// cout << "current " << current << endl;

		// for(auto i : set<char>(full(v)))
		// 	cout << i << " ";
		// cout << endl;

		// cout << "finishing " << i << endl;


		
		uni = max(uni, current );
	}

	cout << uni << endl;

	return 0;
}