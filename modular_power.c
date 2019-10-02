long long int power(long long int base, long long int  number, long long int mod)
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
