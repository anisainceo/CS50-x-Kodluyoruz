#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h = 0;

     do {
        h = get_int("kaç cm?\n");
    }while(h < 0 || h > 100);

    for(int j=0; j<=h; j++){

        for(int i = h; i>j; i--){
            printf(" ");
        }

        for(int k=1; k<=j; k++){
            printf("*");
        }

        for(int b=1; b<=j; b++){
            printf("*");
        }

    printf("\n");
    }
    printf("MERRY CHRISTMAS!\n");
}
