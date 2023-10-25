#include<stdio.h>

int main()
{
    int n= 23456;
    int count =0;

    while(n>0){
        int rem = n%10;
        count = count +rem;
        n = n/10;
    }
    printf("%d", count);
    return 0;
}