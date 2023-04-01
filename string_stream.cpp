#include<iostream>
#include<cstring>
#include<sstream>
using namespace std;

int main()
{
    // Insertion (<<)
    stringstream ss;
    ss<<"Nice";
    cout<<ss.str()<<endl;

    // Extraction
    stringstream sss;
    sss<<"working on it";
    string s1,s2,s3;
    sss>>s1;
    sss>>s2;
    sss>>s3;
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s3<<endl;
    

    return 0;
}