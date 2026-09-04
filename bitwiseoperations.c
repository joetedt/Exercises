#include <stdio.h>
void calculate_the_maximum(int n, int k);//function

int main(){
    int n,k; //n is the maximum number 
             //k is the largest number allowed for the max values
    printf("Enter n and k respectively:");
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n,k);

    return 0;
}
void calculate_the_maximum( int n, int k){ //finds the maximum values of bitwise comparison operators and or and Xor
    int a=1;
    int b= a +1;//a and b show possible combinations of numbers
    int max_and, max_or,max_xor;
    max_and=max_or=max_xor=0;

    for (a = 1; a<n; a++){
        for (b =a +1; b<=n;b++){
            if ((a&b)< k){
                int w =(a&b);
                if (w> max_and){
                    max_and=w;   
                }
            }
        }
    }
    for (a = 1; a<n; a++){
        for (b =a +1; b<=n;b++){
            if ((a|b)< k){
                int m =(a|b);
                if (m> max_or){
                    max_or=m;   
                }
            }
        }
    }
    for (a = 1; a<n; a++){
        for (b =a +1; b<=n;b++){
            if ((a^b)< k){
                int p =(a^b);
                if (p > max_xor){
                    max_xor=p; 
                }
            }
        }
    }
    printf("%d\n", max_and);//outputs max value of and
    printf("%d\n", max_or);//outputs max value of or
    printf("%d\n",max_xor);//outputs max value of xor
}