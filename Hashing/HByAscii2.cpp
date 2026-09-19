#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;

    //pre compute
    int hash[26]={0};
    for (int i = 0; i <s.size(); i++)
    {
        hash[s[i]-'a']++;
    }
    
    int q;
    cin>>q;
    while (q--)
    {
        char c;
        cin>>c;
        //fetch
        cout<<hash[c-'a']<<endl;
    }


    /*   Can also be done as
        this but but it will take more time and we dont need it
    
    //pre compute
    int hash[256]={0};
    for (int i = 0; i <s.size(); i++)
    {
        hash[s[i]]++;
    }
    
    int q;
    cin>>q;
    while (q--)
    {
        char c;
        cin>>c;
        //fetch
        cout<<hash[c]<<endl;
    }*/
    

    // doing  by stl stay tuned
    return 0;
}