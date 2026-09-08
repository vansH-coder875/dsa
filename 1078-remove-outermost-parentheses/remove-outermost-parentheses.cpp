class Solution {
public:
    string removeOuterParentheses(string s) {
        string result = "";
        int cnt = 0 ;
        for(char ch : s){
            if(ch == '('){
                if(cnt > 0 ){
                    result = result + ch;    
                }
                cnt++;
            }
            else if (ch ==')'){
                cnt--;
                if(cnt > 0){
                    result = result + ch;
                }
            }
        }
        return result ;
        
    }
};