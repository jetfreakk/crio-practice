//Given an expression string exp, write a program to examine whether the pairs and the orders of “{“, “}”, “(“, “)”, “[“, “]” are correct in exp
//https://leetcode.com/problems/valid-parentheses/

class Solution {
public:
    bool isValid(string s) {
    //STL stack
     stack<char> se;
        char a;
        for(int i =0;i<s.length();i++)
        {
            a=s[i];
            switch (a)
            {
                case '(':
                    se.push(s[i]);
                    break;
                case '{':
                    se.push(s[i]);
                    break;
                case '[':
                    se.push(s[i]);
                    break;
                case ')':
                    if(se.size()==0)
                        return false;
                    else if(se.top()=='(')
                        { 
                        se.pop();
                        break;
                    }
                    else
                        return false;
                case '}':
                     if(se.size()==0)
                        return false;
                    else if(se.top()=='{')
                        { 
                        se.pop();
                        break;
                    }
                    else
                        return false;
                case ']':
                    if(se.size()==0)
                        return false;
                    else if(se.top()=='[')
                        { 
                        se.pop();
                        break;
                    }
                    else
                        return false;
            }
            
        }
        if(se.size()==0)
        {
            return true;
        }
        else{
            return false;}
    }
};

//Secondary solution

class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        stack<char> se;
        
        for ( auto u : s ) {
            if ( u == '(' || u == '{' || u == '[' ) se.push(u);
            else {
                if ( st.empty() ) return 0;
                if ( u == ')' && se.top() != '(' ) return 0;
                if ( u == '}' && se.top() != '{' ) return 0;
                if ( u == ']' && se.top() != '[' ) return 0;
                se.pop();
            }
        }
        
        return se.empty();
    }
};