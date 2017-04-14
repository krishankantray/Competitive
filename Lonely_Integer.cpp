#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,res=0;
    cin>>n;
    vector<int> lonely(n);
    for(int i=0; i<n; i++)
    {
        cin>>lonely[i];
    }
    
    for(int i=0; i<n;i ++)
      res ^= lonely[i];
    
    cout<<res;
    return 0;
}
