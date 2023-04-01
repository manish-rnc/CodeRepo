#include<iostream>
#include<sstream>
using namespace std;

int main()
{
    string s;
    getline(cin,s);

    stringstream ss;
    ss<<s;

    // breaking into words
    string word;
    while(ss >> word){
        cout << word << endl;
    }

    return 0;
}