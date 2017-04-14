#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int a=0,b=0;
    int a0; 
    int a1; 
    int a2; 
    scanf("%d %d %d",&a0,&a1,&a2);
    int b0; 
    int b1; 
    int b2; 
    scanf("%d %d %d",&b0,&b1,&b2);
    // for problem-clarity
    if(a0 > b0) a++;
    else if(a0 < b0) b++;
    //for originality
     if(a1 > b1) a++ ;
        else if(a1 < b1) b++;
     //for difficulty
     if(a2 > b2) a++ ;
        else if(a2 < b2) b++ ;
      // printing results
       printf("%d %d",a,b);
    return 0;
}
