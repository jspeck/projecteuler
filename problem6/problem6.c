#include <stdio.h>

int main(){

    int sum = 0;
    int sum_of_squares = 0;
    int square_of_sum = 0;

    int i;
    for(i = 0; i <=100; i++){
        sum += i;
        sum_of_squares += (i*i);
    }
    
    square_of_sum = (sum*sum);

    printf("%i - %i = %i\n", square_of_sum, sum_of_squares, (square_of_sum-sum_of_squares));



    return 0;
}