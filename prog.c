#include <stdio.h>

long long fibonacci(long long n) {
	if (n <= 1){
		return n;
	} else {
		return fibonacci(n-1) + fibonacci(n-2); 	 	
	}
}

int main(){
	printf("Start...\n");
	
	long long n = 50;
	printf("Fibonacci: %lld number...\n", n);
	printf("Result: %lld\n", fibonacci(n));
	
	printf("Finish\n");
	
	return 0;

}
