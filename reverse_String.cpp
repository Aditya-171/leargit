// reverse a string using recursion

#include<iostream>
using namespace std;

void rev(string s )
{
    if(s.length()==0){
        return ;
    }

string ros=s.substr(1);
rev(ros);
cout<<s[0];

}

int main()
{
revn("Aditya");
return 0;

}