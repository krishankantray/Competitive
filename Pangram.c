/* Remember to use fgets(, , )rather than gets(), because it has buffer related issues */

#include<ctype.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char str[1000];
    char alpha[]= "abcdefghijklmnopqrstuvwxyz";
    int flag=0,i,j;
    fgets(str,1000,stdin);

    for(i=0; i<strlen(str); i++)
        for(j=0 ; j< strlen(alpha) ; j++)

                {
          if(isupper(str[i]))
          {
              char temp = tolower(str[i]);
              if(temp == alpha[j] )
                alpha[j]='-';

          }
          else{
            if(str[i]==alpha[j])
                alpha[j]='-' ;
          }

        }

        

     for(i=0; i<strlen(alpha); i++)
        if(alpha[i] !='-')
        flag = 1;

         if(flag==0)
        printf("pangram");
     else
        printf("not pangram");

    return 0;
}
