#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples
 * of 3 or 5 below 1024
 * Return: Always 0 (Success)
 */

int natural(int n);

int main(void)
{
    int sum = natural(10);
    printf("%d", sum);
    
    return 0;
}

int natural(int n){
    int sum = 0;
    for(int i = 1; i < 10; i++){
        if(i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
            
    }
    return sum;
}
