
/// question: bs parentheseis matching krni hai
// approach:
// ek stack lo then if opening brackets hai then push krdo , and then check krlo ki , closing brackets coming then look at the stack top if its same type of bracket then pop krdo , 
// edge case : if closing brackets se starting then false return , and if parantesis not matched then false , matched then true(seedhe s.empty() use kro) 

class Solution {
public:
    bool isValid(string s) {
        stack<char>st;

        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
            }

            else {
                if(st.empty()) return false;// this is for the case if start with ],} )

                if((s[i]==')' && st.top()=='(') || (s[i]=='}' && st.top()=='{') || (s[i]==']' && st.top()=='[') ){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        return st.empty();

    }
};