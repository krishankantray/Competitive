#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t,n,c,m,count,total=0,temp;
    vector<int>result;
    cin>>t;
    
    
    for(int i=1; i<=t; i++)
        {
        
        cin>>n>>c>>m;
        
        count =n/c;
         
        total+=count;
         
        while(count)
         {
            if(count > m)
            temp = (count%m);
            else temp =0;
            count /= m;
            
            total += count ; 
            count += temp;
            
        }
        result.push_back(total);
        total=0;
    }
    
    for(int i=0; i<t; i++)
        cout<<result.at(i)<<endl ;
    
    return 0;
}
