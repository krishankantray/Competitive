*/
https://www.hackerrank.com/challenges/hackerrank-in-a-string
*/

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int q,k; 
    scanf("%d",&q);
    char h[] = {'h','a','c','k','e','r','r','a','n','k'};
    for(int a0 = 0; a0 < q; a0++){
        char* s = (char *)malloc(512000 * sizeof(char));
        scanf("%s",s);
        k=0;
        for(int i=0; i< strlen(s); i++)
            if(s[i] == h[k])
            k++;
        if(k == strlen(h))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
