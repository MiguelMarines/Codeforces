#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char c;
    string str;
    string answer;
    
    cin>>c;
    cin>>str;

    string keyboard="qwertyuiopasdfghjkl;zxcvbnm,./";

    int len=str.length();

    for(int i=0; i<len; i++)
    {
	    int index=keyboard.find(str[i]);
	    
	    if(c=='R')
	    {
	        answer+=keyboard[index-1];
	    }
	    else
	    {
	        answer+=keyboard[index+1];
	    }
    }
    
    cout<<answer;

    return 0;
}