#define M 1e9 + 7



long long int gcd(long long int a , long long int b)
{
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
}

void create_pascal_triangle (int n)
{
	// we have to return after creating a pascal triangle of a given size


}


long long int nCr(long long int n , long long int r)
{
	// we have to return nCr as an answer, we shall use pascal's triangle for this
	// The pascal traingle is present in a prev function 

}

long long int powerModM(long long int base, long long int  number, long long int mod)
{
	int res = 1;      // Initialize result 
 
	base = base % mod;  // Umoddate base if it is more than or  
	// equal to mod 
 
	while (number > 0) 
	{ 
		// If number is odd, multimodlnumber base with result 
		if (number & 1) 
			res = (res*base) % mod; 
 
		// number must be even now 
		number = number>>1; // y = y/2 
		base = (base*base) % mod;   
	} 
	return res;  
}

long long int prime_in_n_factorial(long long int n, long long int a)
{
	/// given number n , we have to check for number of a's in n factorials
	ll count = 0;

	while(n)
	{
		n /= a;
		count += n;
	}
	return count;

}


long long int get_sum_of_digits(long long int a)
{
	long long int sum = 0;
	while(a)
	{
		sum += a%10;
		a /= 10;
	}
	return sum;
}


long long int multiplyModM(long long int a, long long int  b, long long int mod)
{

	// now we find a*b mod 
	long long res = 0; // Initialize result   
    // Update a if it is more than 
    // or equal to mod 
    a %= mod; 
    while (b) 
    { 
        // If b is odd, add a with result 
        if (b & 1) 
            res = (res + a) % mod; 
  
        // Here we assume that doing 2*a 
        // doesn't cause overflow 
        a = (2 * a) % mod; 
  
        b >>= 1; // b = b / 2 
    }
    return res; 
}



long long int number_of_divisors(long long int n)
{
	// we will find number of postiive divisors of this number n
	long long int count = 0;

	for(int i = 1; i*i <= n; i++)
	{
		if(n%i == 0)
			count+= 2;
	}

	return count;
}




void get_list_of_primes(long long int n , vector<int> &v)
{
	// vector has been passed by reference here, 
	// and the max limit for n is around pow(10 , 5) / pow(10, 6);
	// this fuction will create the sieve of eratosthenes

	bool prime[n+1];

	memset(prime, true, sizeof(prime));

	// so now that we have this , in our array, if the number if prime we shall have true, else false

	for(int i = 2 ; i*i <= n ; i++)
	{
		if(prime[i] == true)
		{
			// so this number is prime, we make all it's further mulitples false

			for(int j = i*i ; j<= n ; j+= i)
				prime[j] = false;
		}
	} 

	// this created the sieve of eratosthenes of numbers till n;

	// now in our vector we shall add all the elements that are prime and are less than or equal to n

	for(int i = 2 ; i<= n ; i++)
	{
		if(prime[i])
			v.push_back(i); 
		// because then i is  prime
	}
	// here our vector has been populated with all the primes till less than or equal to n
	

	return ;

}
