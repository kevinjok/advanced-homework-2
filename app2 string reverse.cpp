#include<stdio.h> 
#include<stdlib.h>  
#include<string.h>
main()
{
  char S[5000];
  char ouput; 
  printf("�п�J�r��G"); 
  while(scanf("%s",S)==1) 
      {
         printf("�ഫ�r��G",ouput);
   int a,N=strlen(S); 
         for(a=N-1;a>=0;a--)
               printf("%c",S[a]); 
      } 
 system("pause");
    return 0;   
}
