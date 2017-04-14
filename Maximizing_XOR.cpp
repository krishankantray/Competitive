#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int L,R,max=0, res=0;
    cin>>L;
    cin>>R;
    for(int i=L; i<=R ; i++)
        for(int j=L; j<=R; j++)
        {
        res= i^j;
        if(res > max)
            max=res;
    }
    
    cout<<max;
        
    return 0;
}
