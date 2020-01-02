## Welcome to GitHub Pages

You can use the [editor on GitHub](https://github.com/godlewis1/college-repository/edit/master/README.md) to maintain and preview the content for your website in Markdown files.

Whenever you commit to this repository, GitHub Pages will run [Jekyll](https://jekyllrb.com/) to rebuild the pages in your site, from the content in your Markdown files.

### Markdown

Markdown is a lightweight and easy-to-use syntax for styling your writing. It includes conventions for

```markdown
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
```

For more details see [GitHub Flavored Markdown](https://guides.github.com/features/mastering-markdown/).

### Jekyll Themes

Your Pages site will use the layout and styles from the Jekyll theme you have selected in your [repository settings](https://github.com/godlewis1/college-repository/settings). The name of this theme is saved in the Jekyll `_config.yml` configuration file.

### Support or Contact

Having trouble with Pages? Check out our [documentation](https://help.github.com/categories/github-pages-basics/) or [contact support](https://github.com/contact) and we’ll help you sort it out.
