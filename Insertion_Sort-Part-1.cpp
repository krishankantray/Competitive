#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,small,pos,value;
    cin>> n;
    
    vector <int> sort(n) ;
    for(int i=0; i<n; i++)
       cin>>sort[i];
    for(int i=0; i<n; i++)
        {
        small = sort[i];
        pos = i;
        
        for(int j=i+1; j<n ; j++)
            {
            if(sort[j]<small)
              { 
                pos=j;
                value=sort[j];
              }
            
        }
        if(pos != i)
         {
            
        for(int k=pos; k>i ;k--)
        {
            sort[k]=sort[k-1];
            for(int f=0 ;f<n ;f++)
                cout<<sort[f]<<" ";
            cout<<endl;
        }
        sort[i]=value;
        for(int f=0 ;f<n ;f++)
                cout<<sort[f]<<" ";
    }
    }
    
    
    return 0;
}
