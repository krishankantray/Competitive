// IIT Bombay MTech written test 
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string line;
    getline(cin, line);
    
    //loop for reversing words
    int j=0;
    for(int i=0; i<= line.length(); i++)
        if(line[i] == ' ' || line[i] == '\0')
        {
            reverse(line.begin()+j,line.begin()+i );
            j=i+1;
        }
    
    cout<< line;
    return 0;
}

