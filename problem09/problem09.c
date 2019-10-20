#include <stdio.h>
#include <math.h>

int main(){

    int a;
    int b;
    int c;
    
    for(a = 1; a < 1000; a++){
        for(b = 1; b < 1000; b++){
            for(c = 1; c < 1000; c++){
                if( (a*a) + (b*b) == (c*c) ){
                    if( a+b+c == 1000 ){
                        printf("%i %i %i\n", a, b, c);
                        printf("%i\n", a*b*c);
                        return 0;
                    }
                }
            }
        } 
    }

    return 0;
}