#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        stack<char> stk; 
        bool ok = true; 

        for (auto it : s)
        {
            if (it == '{' || it == '(' || it == '[')
            {
                stk.push(it);
            }
            else
            {
                if (!stk.empty())
                {
                    char top = stk.top();
                    if ((it == ')' && top == '(') ||
                        (it == '}' && top == '{') ||
                        (it == ']' && top == '['))
                    {
                        stk.pop();
                    }
                    else
                    {
                        ok = false; 
                        break;
                    }
                }
                else
                {
                    ok = false; 
                    break;
                }
            }
        }

        if (ok && stk.empty())
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}
