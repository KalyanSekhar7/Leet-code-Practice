#include<iostream>
#include<string>
#include<map>
using namespace std;
bool canConstruct(string ransomNote, string magazine) 
    {   
        map<char,int> g1;
        map<char,int> g2;
        bool value=true;
        for (int i=0; i<ransomNote.length();i++)
        {
            if (g1[ransomNote[i]]>=1)
            {
             g1[ransomNote[i]]++;   
            }
            else
                g1[ransomNote[i]]=1;
        }
        for (int i=0; i<magazine.length();i++)
        {
            if (g2[magazine[i]]>=1)
            {
             g2[magazine[i]]++;   
            }
            else
                g2[magazine[i]]=1;
        }
          for (int i=0; i<ransomNote.length();i++)
                {
                    if(g1[ransomNote[i]]!=g2[ransomNote[i]])
                        value=false;
                }
                return value;
    }
int main()
{
    cout<<canConstruct("a","b");
}