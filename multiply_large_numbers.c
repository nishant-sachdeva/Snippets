long long int multiply(long long int a, long long int  b, long long int mod)
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
