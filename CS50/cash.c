#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float lira = get_float("para ustu");
    int kurus =round(lira * 100);
    int sayac = 0;

    while (kurus >=25)
    {
        kurus -= 25;
        sayac += 1;
    }

    while (kurus >=10)
    {
        kurus -= 10;
        sayac += 1;
    }

    while (kurus >=5)
    {
        kurus -=5;
        sayac +=1;
    }

    while (kurus >=1)
    {
        kurus -=1;
        sayac +=1;
    }
     
    printf("sayac = %i \n", sayac); 
    printf("kurus = %i \n", kurus);

}
