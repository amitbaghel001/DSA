class Solution {
public:

vector<int> generateRows(int Rows) {
vector<int> result;
        int ans =1;
        result.push_back(1);
        for(int col=1;col< Rows ;col++){
            ans= ans*(Rows - col);
            ans=ans/col;
            result.push_back(ans);
        }
        return result;
}

vector<vector<int>> generate(int numRows) {
        vector<vector<int>>temp;
        for(int i=1 ;i<=numRows;i++){
            temp.push_back(generateRows(i));
        }
        return temp;
    }
};