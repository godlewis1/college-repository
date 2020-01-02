#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (int argc, string argv[])
{
    if(argc != 2)
    {
        printf("usage:./caesar key\n");
        return 1;
    }
    int n= atoi(argv[1]);
    
    if(n<0||atoi(argv[1])<1)
    {
        printf("usage:./caesar key\n");
        return 1;
    }
    else
    {
    n=n%26;
    string sentence= get_string("plaintext:");
    printf("ciphertext: ");
    for(int i=0;i<strlen(sentence);i++)
    {
        while(((sentence[i]+n>122||(sentence[i]+n>96&&sentence[i]+n<123)||(sentence[i]==32||sentence[i]==44||sentence[i]==33)||(sentence[i]+n>90||(sentence[i]+n>64&&sentence[i]+n<91)))&&i<strlen(sentence)))
        {
            if (sentence[i]+n>122)
            {
                sentence[i]=sentence[i]+n-26;
            }
            else if(sentence[i]+n>96&&sentence[i]+n<123)
            {
                sentence[i]=sentence[i]+n;
            }
            else if(sentence[i]==32||sentence[i]==44)
            {
            sentence[i]=sentence[i];
            }
            else if (sentence[i]+n>90)
            {
                sentence[i]=sentence[i]+n-26;
            }
            else if(sentence[i]>64&&sentence[i]+n>64&&sentence[i]+n<91)
            {
                sentence[i]=sentence[i]+n;
            }
            else
            {
            sentence[i]=sentence[i];
            }
            printf("%c",sentence[i]);
            i++;
        }
    }
    }
printf("\n");
}

