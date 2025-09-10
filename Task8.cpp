#include <iostream>
using namespace std;
int find_substring(string text, string pattern)
{
    if(pattern.length() == 0 || pattern.length() > text.length())
        return -1;
    

    for(int i = 0;i < text.length() ;i++)
        if(pattern[0] == text[i])
        {
            bool match = true;
            for(int j = 1;j < pattern.length(); j++)
            {
                if(text[i + j] != pattern[j])
                {
                    match = false;
                    break;
                }
            }
            if(match)
                return i;
        }
    return -1;
}

int main()
{
    cout << "Pattern at the beginning:" << endl;
    cout << find_substring("Hi, Abdul Hanan here", "Hi") << endl;
    
    cout << "Pattern at the end:" << endl;
    cout << find_substring("Hi, Abdul Hanan here", "here") << endl;

    cout << "Pattern not present:" << endl;
    cout << find_substring("Hi, Abdul Hanan here", "hello") << endl;

    cout << "Empty Pattern:" << endl;
    cout << find_substring("Hi, Abdul Hanan here", "") << endl;
    return 0;
}