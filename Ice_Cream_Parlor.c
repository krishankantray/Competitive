#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,dollar,flavours,sum=0,c1,c2;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
        {
        scanf("%d",&dollar);
        scanf("%d",&flavours);
        int *arr = malloc(flavours*sizeof(int));
        for(int j=0; j<flavours; j++)
            scanf("%d",&arr[j]);
        
        for(int j=0; j<flavours; j++)
           {
               c1=0; c2=0;
            for(int k=j+1; k<flavours; k++)
                {
                sum=0;
                sum= arr[j]+arr[k] ;
                if(sum == dollar)
                    {
                        c1 = j+1;
                        c2 = k+1;
                        break;
                    }
                
            }
       
               if(sum == dollar)
                    {
                        
                        break;
                    }
           }
        
        printf("%d %d\n",c1,c2);
        
        }
        
    return 0;
}
