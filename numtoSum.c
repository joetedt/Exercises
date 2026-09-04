#include <stdio.h>

int convertNumtoarray(int a);//converts number into array

int num, i, num_array[5], sum;
int main(){
    printf("Enter Number:");
    scanf("%d", &num);
    convertNumtoarray(num);
    printf("The sum is:%d\n", sum);
    return 0;
}
int convertNumtoarray(int a){
    if(a >= 10000 && a<= 99999){
        sum = 0;
        for (i=0; i<5; i++){
            num_array[i] = num %10; //draws out the last digit in the number after every run
            num = num/10;
            printf("%d\n", num_array[i]); //if u need the list of how numbers appear
            sum += num_array[i];
    
        }
        // printf("%d\n", sum);

    }
    return sum;// return sum as final value to be used else where in the expression, void would work too
    //i think
}