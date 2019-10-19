#include <stdio.h>

int main(){

    int i;
    int n = 20;
    
    while(1){
    
        // test if n  is divisible by all numbers between 1 and 20
        for(i = 1; i < 21; i++){
            if(n % i != 0){
                break;
            }
        }
        
        // test if for-loop completed without breaking, if so smallest number was found
        if(i == 21)
            break;
        n++;
    }

    printf("%i\n", n);

    return 0;
}