#include <stdio.h>
#include <string.h>
#define CLEARBUFF getchar()
int main() {
   char a[30];
   char b[30];
   int n;
   printf("%s\n","==== Task 2 ====");
   printf("%s\n","enter first word");
   scanf("%s",a);
   printf("%s\n","enter second word");
   scanf("%s",b);
   printf("%s\n","enter amount");
   scanf("%i",&n);
   strncat(a,b,n);
   printf("%s\n","result");
   printf("%s\n", a);



   printf("%s\n","==== Task 7 ====");
   char len[21];
   printf("%s\n","enter string");
   scanf("%s",len);
   int size = strlen(len);
   printf("%s\n","Size of string");
   printf("%i\n", size);



   printf("%s\n","==== Task 9 ====");
   char symbol;
   char word[256];
   printf("%s\n","enter word");
   scanf("%s", word);
   printf("%s\n","enter symbol");
   CLEARBUFF;
   scanf("%c", &symbol);
   int z=0;
   for(int i=0; i<strlen(word);++i)
       if(word[i]==symbol)
           z=i;
   z++;
   printf("%s\n","Last symbol position");
   printf("%i\n",z);


   printf("%s\n","==== Task 11 ====");
    printf("%s\n","enter word1");
    char word1[256];
    char word2[256];
    scanf("%s", word1);
    printf("%s\n","enter word2");
    scanf("%s", word2);
    int max=0;
    int maxsave=0;
    int j=0;

    for(int i=0;i<strlen(word1);i++)
         {
            if (word1[i] == word2[j]){
                max++;
                j++;}
            else {if (max!=0)
                    maxsave = max;
                max = 0;


            }

        }
    printf("result: %i\n", maxsave);

    printf("%s\n","==== Task 13 ====");
    char str [24];
    char sep [10];
    printf("%s\n","enter string");
    scanf("%s",str);
    printf("%s\n","enter separators");
    scanf("%s",sep);
    char *istr;
    printf ("string %s\n", str);
    printf ("result:\n");
    istr = strtok (str,sep);
    while (istr != NULL)
    {
        printf ("%s\n",istr);
        istr = strtok (NULL,sep);
    }

return 0;}