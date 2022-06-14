Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
 

Example 1:

Input: s = "()"
Output: true
Example 2:

Input: s = "()[]{}"
Output: true
Example 3:

Input: s = "(]"
Output: false
 


///////////////////////////////////////////////////////////////////////////////// SOLUTION ///////////////////////////////////////////////////////////////////////////////

class Solution {
public:
    bool isValid(string s) {
        
        stack<char> list;
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')
            {
                list.push(s[i]);
            }
            
            else if(!list.empty())
            {
                if(s[i]==']' && list.top()=='[')
                {
                    list.pop();
                    
                }
                
                else if(s[i]=='}' && list.top()=='{')
                {
                    list.pop();
                }
                
                else if(s[i]==')' && list.top()=='(')
                {
                    list.pop();
                }
                else
                {
                    return false;
                }
            }
            
            else
            {
                return false;
            }
        }
        
        if (list.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};
