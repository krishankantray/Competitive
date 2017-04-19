#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int h,m;
    cin>>h>>m;
    string numbers[] = {
                        
        "one", "two", "three", "four","five", "six", "seven","eight", "nine", "ten", "eleven","twelve", "thirteen", "fourteen", "quarter", "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "twenty one", "twenty two", "twenty three", "twenty four", "twenty five", "twenty six", "twenty seven", "twenty eight", "twenty nine", "half"
    };
    
 if(m==0)
     {
     cout<<numbers[h-1]<<" o' clock" ;
 }
    else if(m<=30 && m>0)
        {
            if(m==15)
            cout<<numbers[m-1]<<" past "<<numbers[h-1];
            else if(m==30)
            cout<<numbers[m-1]<<" past "<<numbers[h-1];
            else
        cout<<numbers[m-1]<<" minutes past "<< numbers[h-1];
    }
    else if(m>30 && m<60)
        {
            if(m==45)

            cout<<numbers[60-m-1]<<" to "<<numbers[h];
            else
        cout<<numbers[60-m-1]<<" minutes to "<<numbers[h];
    }
    
    return 0;
}
