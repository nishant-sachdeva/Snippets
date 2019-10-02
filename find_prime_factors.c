vector<int> vec;

void  fill_up_prime_x(ll x)
{
	// now we will find the prime factors  of x using normal wa
	for(int i = 2 ; i*i <= x ; i++)
	{
		if(x%i == 0)
		{
			if(prime(i) == 1)
				vec.pb(i);
			if(prime(x/i) == 1)
				vec.pb(x/i);
		}
	}
	// this should  fill up the  vector vec with prime factors of x
	// sort(full(vec));
	return;
}