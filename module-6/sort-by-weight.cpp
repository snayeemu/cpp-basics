#include <bits/stdc++.h>
using namespace std;

class Frequency{
    public:
        char value;
        int frequency = 0;
};

bool cmp(Frequency& a, Frequency& b){
    return a.frequency > b.frequency;
}

int main()
{
    Frequency chars[26];
    string str;
    getline(cin, str);
    
    for(char c : str)
        chars[c - 'a'].frequency++;
    
    for(int i = 'a'; i <= 'z'; i++)
        chars[i - 'a'].value = i;

    sort(chars, chars + 26, cmp);

    for(int ch = 'a'; ch <= 'z'; ch++)
        for(int frequency = 0; frequency < chars[ch - 'a'].frequency; frequency++)
            cout << chars[ch - 'a'].value;
    

    return 0;
}