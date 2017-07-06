// Code Jam Hackerrank
#include<iostream>
#include<string>
#include<algorithm>
#include<cctype>
using namespace std;
int main()
{
    int x;
    cin>>x;
    
    for(int i=0; i<x; i++)
    {
    string line;
    getline(cin,line);
    getline(cin,line);

    //loop for reversing words
    int j=0;
    for(int i=0; i<= line.length(); i++)
        if(line[i] == ' ' || line[i] == '\0')
        {
            
            reverse(line.begin()+j,line.begin()+i );
            line[j]= toupper(line[j]);
            j=i+1;
            
        }
    
    cout<< line<<endl;
    }
    return 0;
}
