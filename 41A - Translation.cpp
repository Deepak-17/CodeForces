//CodeForces
//Problem 41A [Translation]

#include <bits/stdc++.h>
using namespace std;

int main()
{
string str1,str2;
cin>>str1>>str2;

reverse(str1.begin(),str1.end());

if(str1==str2){cout<<"YES";}
else {cout<<"NO";}

return 0;
}