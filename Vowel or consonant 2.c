

/*vowel or consonant*/

#include <stdio.h>

int main()
{
    char ch;
    scanf("%c",&ch);
    
    if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
    {if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||CH=='O'||ch=='u'||ch=='U')
    
      printf("%c is a vowel",ch);
    else
      printf("%c is a consonant",ch);
}
else
    printf("%c is not an alphabet",ch);
    return 0;
}
