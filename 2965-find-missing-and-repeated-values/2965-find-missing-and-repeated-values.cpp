class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        int repeated;
        int missing;

        set<int>s;
        int sum=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                sum+=grid[i][j];
                if(s.find(grid[i][j])!=s.end()){
                     repeated=grid[i][j];
                }
                s.insert(grid[i][j]);
            }
        }

        

        return {repeated,((n*n)*(n*n+1)/2)-sum+repeated};
    }
};