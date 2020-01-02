#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    if(argc != 2)
    {
        printf("usage:./vigenere key\n");
        return 1;
    }
    string s = argv[1];
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]<=64||(s[i]>=91&&s[i]<=96)||s[i]>=123)
        {
            printf("usage:./vigenere key\n");
            return 1;
        }
    }
    string sentence=get_string("plain text: ");
    printf("ciphertext: ");
    for(int i=0,j = 0;i<strlen(sentence);i++,j++)
    {
                int n=s[j]-97;
                int m=s[j]-65;
             
        while(i<strlen(sentence))
        {
            if (strlen(s)==j)
                {
                    j=0;
                }
            n=s[j]-97;
            m=s[j]-65;
            if(m>25)
            {
                m=0;
            }
            if(n<0)
            {
                n=0;
            }
            if (sentence[i]+(n+m)>122)
            {
                sentence[i]=sentence[i]+(n+m)-26;
            }
            else if(sentence[i]>96&&sentence[i]+(n+m)>96&&sentence[i]+(n+m)<123)
            {
                sentence[i]=sentence[i]+(n+m);
            }
            else if (sentence[i]+(n+m)>90)
            {
                sentence[i]=sentence[i]+(n+m)-26;
            }
            else if(sentence[i]>64&&sentence[i]+(n+m)>64&&sentence[i]+(n+m)<91)
            {
                sentence[i]=sentence[i]+(n+m);
            }
            else if((sentence[i]>=0&&sentence[i]<65)||(sentence[i]>90&&sentence[i]<97))
            {
                sentence[i]=sentence[i];
                j=j-1;
            }
            printf("%c",sentence[i]);
            i++,j++;
        }
        printf("\n");
    }
}

