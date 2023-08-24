#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int dizi[50], gecici, adet;

    printf("Kac adet sayi girilecek: ");
    scanf("%d", &adet); 

    for(int i=0; i<adet; i++)
    {  // Kullanıcıdan sayıları alıyoruz
        printf("%d)Sayi giriniz: ", i+1);
        scanf("%d", &dizi[i]);
    }
        for(int i =0; i<2; i++)
            {
            for(int j=i+1; j<3; j++)
                {
                if(dizi[i] < dizi[j])
                    {
                gecici = dizi[i]; // Dizi[i] yi kaybetmemek için gecicide tutuyoruz
                dizi[i] = dizi[j]; //dizi[i] yi dizi[i] den daha küçük olan dizi[j] kaydediyoruz
                dizi[j] = gecici; // Dizi[j] ye ise dizi[i] değerini kaydediyoruz. Bu değeri gecicide saklamıştık
            }
                }
                    }
 
        for(int i=0; i<3; i++)
        {
            printf("%d ", dizi[i]);
        }
    printf("\n");
    system("pause");
    return 0;
 }