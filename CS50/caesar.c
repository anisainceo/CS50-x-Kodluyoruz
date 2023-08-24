#include <cs50.h>
#include <stdio.h>

#include <stdlib.h>
#include <string.h>

// ./caesar 2
int main ( int argc , string argv[] )
{
    //./caesar yazdıktan sonra değer kontrolü
    if (argc != 2)
    {
        printf ("usage: ./caesar key\n");
        return 1;
    }
    // int çevirdim

    int sayib = atoi(argv[1]);
    int allb = strlen (argv[1]); //33 yazarsak 2ye eşit
    //printf("%d", allb);

    // ./caesar yazdıktan 0 girişi
    if ( sayib == 0 )
    {
        printf ("usage: ./caesar key\n");
        return 0;
    }

    //negatif ve harf kontrolü
    if ( sayib < allb )
    {
        printf ("usage: ./caesar key\n");
        return 0;
    }

    // moduna bakarız 26dan fazlaysa MOD aynısı eleman dönecek
    // arrayden dolayı 25 kullanmayı unumta
    int key = atoi (argv[1]);
    if ( key >= 26)
    {
        key %= 26;
    }

    //texti alma
    string text = get_string ("plaintext: ");

    //sonucumuz
    printf ("ciphertext: ");

    // teker teker arrayimizin harflerie bakıp caesar uygulama
    for ( int i = 0 , n = strlen (text); i <n; i++)
    {
        //küçük a ve z arasındakiler
        if ( text[i] >= 'a' && text[i] <= 'z')
        {
            //z den harfi çıkarır ki tekrar lise yenilensin 
            // y 24 z 25
            //26 - harf degri
            
            int kucuk = 'z' - text[i];
            //printf("\n kucuk: %d\n",kucuk);
            //printf("\n key: %d\n",key);

        
            if ( key > kucuk) // kaç ilerleticem > yeni sayı 
            {
                int k = (key - kucuk) - 1;
                //printf("\n k: %d\n",k);
                text[i] = 'a';
                printf ("%c", text [i] + k);
                continue;
            }

            printf ("%c", text[i] + key);
            continue;
        }
        // A ve Z arasında 
        else if ( text[i] >= 'A' && text[i] <= 'Z')
        {
            int buyuk =  'Z' - text[i];
            if ( key > buyuk)
            {
                int b = (key - buyuk) - 1;
                text[i] = 'A';
                printf ("%c", text[i] + b);
                continue;
            }
            printf ("%c", text[i] + key);
        }
        else
        {
            printf ("%c", text[i]);
        }
    }
    printf ("\n");
}
