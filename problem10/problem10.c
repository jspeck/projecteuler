#include <stdio.h>

int isPrime(unsigned long int n){
    unsigned long int temp = n / 2;
    
    if(n == 1){
        return 0;
    }
    
    if(n == 2){
        return 1;
    }
    
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

    unsigned long int sum = 2;
    
    unsigned long int i;
    for(i = 3; i < 2000000; i+=2){
        printf("%li\n", i);
        
        if(isPrime(i)){
            sum += i;
        }
        
    }
    
    printf("%li\n", sum);

    return 0;
}