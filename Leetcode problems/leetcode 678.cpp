class Solution {
public:
    bool checkValidString(string s) {
        int n=s.length();

        stack<int>opening;
        stack<int>asterik;

        for(int i=0;i<n;i++){
            if(s[i]=='(') {
                opening.push(i);
            }
            else if(s[i]=='*'){
                asterik.push(i);
            }
            else{
                
                if(s[i]==')'){// this condition is worthless can be removed ,
                
                if(!opening.empty()){
                    opening.pop();
                }
                else if(!asterik.empty()){
                    asterik.pop();
                }
                else{
                return false;
                }
                }
            }
        }
        while(!opening.empty() && !asterik.empty()){
            if(opening.top() < asterik.top()){
            opening.pop();
            asterik.pop();
            }
            else return false;
        }
    return opening.empty();// for dealing the case of only * 
    }
};