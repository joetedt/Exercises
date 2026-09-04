//finding nth number in a series where the first 3 numbers are given
#include <stdio.h>
int a,b,c;
int series(int n);
int main(){
    int n;
    scanf("%d %d %d %d", &n, &a, &b, &c);
    printf("%d\n", series(n));
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