// find the GCD of the given sequence of elements
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
	int n, gcd_of_all, val;
	// number of inputs
	scanf("%d", &n);
	n --;
	scanf("%d", &gcd_of_all);
	while(n--){
		scanf("%d", &val);
		gcd_of_all = gcd(gcd_of_all, val);		
	}
	printf("%d\n", gcd_of_all);
	return 0;
}
