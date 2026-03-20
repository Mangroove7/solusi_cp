#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;getline(cin,s);
    vector <char> vowels = {'a','i','u','e','o','y'};
    vector <char> capital_vowels = {'A','I','U','E','O','Y'};
    for(int i = s.size() - 1;i >= 0;i--){
        if(s[i] >= 'a' && s[i] <= 'z'){
            if(find(vowels.begin(),vowels.end(),s[i]) != vowels.end())cout << "YES\n";
            else cout << "NO\n";
            break;
        }
        else if(s[i] >= 'A' && s[i] <= 'Z'){
            if(find(capital_vowels.begin(),capital_vowels.end(),s[i]) != capital_vowels.end())cout << "YES\n";
            else cout << "NO\n";
            break;
        }
    }

    return 0;
}