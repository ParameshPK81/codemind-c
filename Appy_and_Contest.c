#include <stdio.h>

int hcf(int a, int b)
{
    if(a == 0)
        return b;
    return hcf(b % a, a);
}

int main(void) {
	// your code goes here
	int T;
	scanf("%d", &T);
	
	while(T--)
	{
	    long long int N, A, B, K;
	    scanf("%lld %lld %lld %lld", &N, &A, &B, &K);
	    
	    long long int res = 0, lcm;
	    lcm = (A * B) / hcf(A, B);
	    res = (N / A) + (N / B) - (2 * (N / lcm));
	    
	    if(res >= K)
	        printf("Win
");
	    else
	        printf("Lose
");
	}
	return 0;
}