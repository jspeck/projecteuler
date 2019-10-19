#include <stdio.h>

int main(){


    int sum = 2;

    int n1 = 1;
    int n2 = 2;
    int temp = 3;
    
    while(temp <= 4000000){
        temp = n1 + n2;
        n1 = n2;
        n2 = temp;
        
        if(temp % 2 == 0){
            sum += temp;
        }
        
        printf("%i\n", temp);
    }


    printf("sum of even numbers in fibonacci sequence: %i\n", sum);

    return 0;
}