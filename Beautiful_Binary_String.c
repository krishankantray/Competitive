#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,count=0; 
    scanf("%d",&n);
    char* B = (char *)malloc(10240 * sizeof(char));
    scanf("%s",B);
    for(int i=0; i<n-2; i++)
        {
        if(B[i]=='0' && B[i+1]=='1' && B[i+2]=='0')
          
        {
            count ++;
            i= i+2;
        
        }
    }
    printf("%d", count);
    return 0;
}
