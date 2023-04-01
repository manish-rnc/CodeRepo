#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string s;
    cin>>s;      // input is expected without spaces - space is considered as terminating character
    cout<<s<<endl;


    char ss[10];
    // cin>>ss; // without spaces
    // gets(ss);  // input can be supplied with spaces but works for char arrays only
    fgets(ss,10,stdin);   // with spaces, also checks the size limit that is prevent buffer overflow
    cout<<ss<<endl;   


    string str;
    getline(cin,str);  // getline(cin, name_of_the_string); --= here newline is by default the delimiter character
    cout<<str<<endl;  

    string strr;
    getline(cin,strr,'!');   // getline(cin, name_of_the_string, delimiter_character);
    cout<<strr<<endl;

    return 0;
}