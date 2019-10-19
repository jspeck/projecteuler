#include <stdio.h>

int isPrime(unsigned long int n){
    int temp = n / 2;
    
    if(n % 2 == 0){
    	return 0;
    }
    
    int i;
    for(i = 3; i <= temp; i+=2){
        if(n % i == 0){
            return 0;
        }
    }
    
    return 1;
}

int main(){

    unsigned long int n = 600851475143;
    unsigned long int temp = n / 2;
    unsigned long int factor = 0;
    unsigned long int i;
    
    for(i = 3; i < temp; i+=2){
        if( n % i == 0 ){
            if( isPrime(i) == 1){
                printf("%li\n", i);
                factor = i;
            }
        }
    }
	
    printf("largest prime factor: %li\n", factor);

    return 0;
}

