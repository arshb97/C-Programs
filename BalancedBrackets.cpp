#include <bits/stdc++.h>
#include <iostream>
#include <stack>

using namespace std;

string isBalanced(string s) {
    // Complete this function
    stack<char> stk;
    char x, y;
    string res;
    int len = s.length();
    for(int i = 0; i < len; i++)
        if((s[i] == '(') || (s[i] == '{') || (s[i] == '['))
        {
            stk.push(s[i]);
        }
        else
        {
            if(stk.empty())
            {
                return "NO";
            }
            x = stk.top();
            y = s[i];
            if((x == '(' && y == ')') || (x == '{' && y == '}') || (x == '[' && y == ']'))
            {
                stk.pop();
                continue;
            }
            return "NO";
        }
    if(stk.empty())                     //To check if all the matching pairs have been removed
    {
        return "YES";
    }
    return "NO";
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string s;
        cin >> s;
        string result = isBalanced(s);
        cout << result << endl;
    }
    return 0;
}

