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
	int x, y;
	while(~scanf("%d%d", &x, &y)){
		printf("%d\n", gcd(x, y));
	}
	return 0;
}
