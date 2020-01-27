// find LCM of the given two inputs
#include <stdio.h>
int temp;
int gcd(volatile int x, volatile int y){
	if( y > x){
		// making x greater than y
		temp = x;
		x = y;
		y = temp;
	}	
	while(y > 0){
		x %= y;
		temp = x;
		x = y;
		y = temp;		
	}	
	return x;
}
// driver
int main(){                                      
	int a, b;
	scanf("%d%d", &a, &b);
	int gcd_of_both = gcd(a, b);
	printf("%d", a  * b / gcd_of_both);	// gcd(n1, n2) * lcm(n1, n2) == n1 * n2
	return 0;
}
