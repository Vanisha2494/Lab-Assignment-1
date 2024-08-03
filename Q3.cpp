#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"\tString Reversal\t"<<endl;
    cout<<"Enter the string to be reversed: ";
    string str;
    cin>>str;
    cout<<"Original string is: "<<str<<endl;
    reverse(str.begin(), str.end());
    cout<<"Reverse string is: "<<str<<endl;
    return 0;
}
