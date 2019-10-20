#include <stdio.h>
#include <stdlib.h>

int isPalindrome(char *str, int n){
    int i;
    int j;
    
    // Find null-terminator in string
    for(j = n-1; j >= 0; j--){
        if(str[j] != '\0'){
            break;
        }
    }
    
    // Test if palindrome
    for(i = 0; i < n, j >=0; i++, j--){
        if(str[i] != str[j]){
            return 0;
        }
    }
    return 1;
}

int main(){
    
    char str[10] = "\0";
    int largest = 0;
    int n1 = 0;
    int n2 = 0;
    int product = 0;
    
    int i, j;
    for(i = 100; i < 1000; i++){
        for(j = 100; j < 1000; j++){
            product = i*j;
            sprintf(str, "%i", product);    // convert int to string
            if(isPalindrome(str, 10)){      // test if palindrome
                if(product > largest){      
                    largest = product;
                    n1 = i;
                    n2 = j;
                }
            }
        }
    }
    
    printf("%i*%i = %i\n", n1, n2, largest);
    
    return 0;
}