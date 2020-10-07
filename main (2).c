//program to print the fibonacci series upto n numbers
#include<stdio.h>
int main()
{
    int n, first_term=0, second_term=1,sum=0, next_term ;
    printf("Enter the number of terms upto which you want to print the fibonacci series\n");
    scanf("%d", &n);
    
    while(sum<=n){
        printf("%d  ", sum);
        first_term= second_term;
        second_term= sum;
        sum=first_term+second_term;
    }
    return 0;
}


/* say n=6
therefore the fibonacci upto n(6) terms is 0, 1, 1, 2, 3, 5
*/

