// 844. Backspace String Compare

// Given two strings s and t, return true if they are equal when both are typed into empty text editors. '#' means a backspace character.

// Note that after backspacing an empty text, the text will continue empty.

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack <char> st1,st2;

        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == '#' && !st1.empty())
            {
                st1.pop();
            }
            else if(s[i] != '#')
            {
                st1.push(s[i]);
            }
        }
        for(int i=0; i<t.size(); i++)
        {
            if(t[i] == '#' && !st2.empty())
            {
                st2.pop();
            }
            else if(t[i] != '#')
            {
                st2.push(t[i]);
            }
        }
        if(st1.size() != st2.size())
        {
            return false;
        }   
        else
        {
            while(!st1.empty())
            {
                if(st1.top() != st2.top())
                    return false;
                else
                {
                    st1.pop();
                    st2.pop();
                }
            }
        } 
        return true;
    }
};