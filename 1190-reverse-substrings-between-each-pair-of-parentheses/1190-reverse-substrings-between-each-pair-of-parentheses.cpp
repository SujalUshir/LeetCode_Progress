class Solution {
public:
    string reverseParentheses(string s) {
        stack<string>arr;
        string curr;

        for(char c:s){
            if(c=='('){
                arr.push(curr);
                curr="";
            }

            else if(c==')'){
                reverse(curr.begin(),curr.end());
                curr=arr.top()+curr;
                arr.pop();
            }

            else    curr+=c;
        }

        return curr;
    }   
};