class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        int repeated;
        int missing;

        set<int>s;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(s.find(grid[i][j])!=s.end()) repeated=grid[i][j];
                else    s.insert(grid[i][j]);
            }
        }

        for(int i=1;i<=n*n;i++){
            if(s.find(i)==s.end()){
                missing=i;
                break;
            }
        }

        return {repeated,missing};
    }
};