#include<stdio.h>
int check_prime(long int n) {
	long int i;
	for(i = 2; i<sqrt(n);i++) {
		if((n%i)==0)
			return 0;
	}
	return 1;
}
int main() {
	long int number,i,j;
	scanf("%ld",&number);
	if(check_prime(number))
		printf("0\n");
	else {	
		for(i=1;i<number-2;i++){
			if(check_prime(number-i)){
				printf("%d\n",(number-(number-i)));
				break;
			}
			else if(check_prime(number+i)){
				printf("%d\n",((number+i)-number));
				break;
			}		
		} 
	}	
	return 0;
}

