class Solution {
public:
    vector<string>ans;

    vector<string>key={
        "", "", "abc", "def", "ghi",
        "jkl", "mno", "pqrs", "tuv", "wxyz"
    };

    void solve(string &digit,int index,string curr){
            if(index==digit.size()){
                ans.push_back(curr);
                return;
            }

            int digits=digit[index]-'0';

            for(char c:key[digits]){
                curr.push_back(c);
                solve(digit,index+1,curr);

                curr.pop_back();
            }
    }

    vector<string> letterCombinations(string digits) {
        if(digits.size()==0)    return {};

        solve(digits,0,"");
        return ans;
    }
};