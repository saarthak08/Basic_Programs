#include<stdio.h>
int main()
{
      char a[100];
      int i,j=0,k=0;
      printf("\nEnter a string:\n");
      scanf("%[^\n]%*c",a);
      for(i=0;a[i]!='\0';i++)
      {
                  if(a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U')
      { j++;
      }        if(((a[i]>=65&&a[i]<=90)||(a[i]>=97&&a[i]<=122))&&(a[i]!='a'&&a[i]!='A'&&a[i]!='e'&&a[i]!='E'&&a[i]!='i'&&a[i]!='I'&&a[i]!='o'&&a[i]!='O'&&a[i]!='u'&&a[i]!='U'))
   {   
      k++;            
    }
      }
    printf("\nNumber of vowels in string:%d\n",j);
    printf("\nNumber of consonants in string:%d\n",k);
    }        
            
            