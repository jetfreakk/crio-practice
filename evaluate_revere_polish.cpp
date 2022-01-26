class Solution {
public:
    int evalRPN(vector<string>& tokens) {
    stack<int> ans;
        for(string i : tokens)
        {
            if(i == "*" || i == "/" || i == "+" || i == "-")
            {
                int x = ans.top(); ans.pop();
                int y = ans.top(); ans.pop();
                
                if(i ==  "*") ans.push(x*y);
                if(i ==  "/") ans.push(y/x);
                if(i ==  "+") ans.push(x+y);
                if(i ==  "-") ans.push(y-x);
            }
            else
                ans.push(stoi(i));
        }
        return ans.top();
    }
};