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
    
    int n = 1;
    unsigned long int i = 3;

    while(n != 10001){
        if(isPrime(i)){
            n++;
            printf("%i prime number is %li\n", n, i);
        }
        i+=2;           
    }

    return 0;
}

