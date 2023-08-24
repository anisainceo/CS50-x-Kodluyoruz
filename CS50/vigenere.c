#include <cs50.h>
#include <stdio.h>
#include <string.h>

int control( int argcControl );
bool security;
int doVigenere (string argvControl[]);

int main(int argc, string argv[])
{
    //doğru key alma    
     if(argc != 2)
     {
        printf("usage: ./vigenere keyword\n");
        return 1;
     } 
     
     if( control (argc) )
     {
         int a = 0;
         int b = strlen(argv[1]); // ./vigenere ebrunisa1234  b=12        a=8
                                 //  ./vigenere kodluyoruz4   b=11          a= 10
         for( int g = 0, h =strlen (argv[1]); g < h ; g++)
         {
             if(   (argv[1][g]>= 'a' && argv[1][g] <='z' ) ||  ( argv[1][g]>='A' && argv[1][g]<='Z' )   )
             {
                 a++;
             }   

        
         }
        if( a < b )
        {
            printf("usage: ./vigenere keyword\n");
            return 1;
        }
        else
        {
            doVigenere(argv);
        
        }   
    }   

}   

int control (int argcControl)
{
    if( argcControl != 2)
    {
        printf("usage: ./vigenere keyword\n");
        return 1; 
    }
    else
    {
        security = true;
    }
    return security;
    
}    

int doVigenere (string argvControl[])
{       
    string text= get_string("plaintext: ");
    printf("ciphertext: ");
        
    for(int j= 0, k= strlen (argvControl[1]); j < k ; j++ )  
    {
        
        // ./vigenere CODE ---------> ./vigenere code
        if(argvControl[1][j]>='A' && argvControl[1][j]<='Z')
        {
            argvControl[1][j] +=  ('a' - 'A');
        }
    }  
            
        
    int mod;
    int baska= 0;
    string key = argvControl[1];  //argvControl yazmaktan sıkılanlar için 
    
    for( int i = 0 , n = strlen( text ); i < n ; i++)
    {
         mod = baska % strlen (key);
         //
         //  ./vigenere code
         //     Iyi Ki Dogdun
         //
         //
         //
        if(text[i]>='a' && text[i]<='z')
        {
            int kcontrol= 'z' - text[i];
            if((key[mod]-'a') > kcontrol)
            {
                int kcc= ((key[mod]- 'a') - kcontrol) - 1;
                 text[i] = 'a';
                printf("%c", text[i] + kcc); 
                baska++;
                continue;
            }
            printf("%c", text[i] + (key[mod] - 'a')  );
            baska++;
            continue;
        } 


            if(text[i]>='A' && text[i]<='Z')
            {
                int bcontrol= 'Z' - text[i];
                if((key[mod]-'a') > bcontrol)
                    {
                        int bcc= ((key[mod]- 'a') - bcontrol) - 1;
                        text[i] = 'A';
                        printf("%c", text[i] + bcc); 
                        baska++;
                        continue;
                    }
                    printf("%c", text[i] + (key[mod] - 'a' ) );
                    baska++;
                    continue;
            } 

            else
            {
                printf("%c", text[i]);
                continue;
            }

    }
    printf("\n");
    return 0; 
    
}
