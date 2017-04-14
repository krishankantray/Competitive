#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int count(char str[])
    {   int d=0;
        for(int j=0; j<strlen(str); j++)
        {
            if(str[j]==str[j+1])
                d++;
        }
     return d;
}
int main() {

    int n;
    scanf("%d",&n);
    int d[n];
    char str[100000];
    for(int i=0; i<n ; i++)
        {
         scanf("%s", str);
        d[i]=count(str);

        
    }
    
    for(int i=0; i<n; i++)
        printf("%d\n", d[i]);
    return 0;
}
