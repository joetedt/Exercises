//finding nth number in a series where the first 3 numbers are given
//the nth term is found as it is the sum of the three previous numbers
//so for example given the first three numbers as 1, 2, 3 the fourth number
//is 6 (1 + 2 + 3 = 6)
#include <stdio.h>
int a,b,c;
int series(int n);
int main(){
    int n;
    printf("Enter the position n of number required:");
    scanf("%d", &n);
    printf("Enter the first 3 numbers in the series:\n");
    scanf("%d %d %d", &a, &b, &c);
    printf("The position %d number is: %d\n", n, series(n));
    return 0;
}

int series(int n){
    if(n == 1){
        return a;
    }
    else if( n == 2){
        return b;
    }
    else if (n == 3) {
        return c;
    }
    else{
        return series(n-1) + series(n-2)+ series(n-3);;
    }

}