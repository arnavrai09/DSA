class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& p) {

        sort(p.begin(), p.end(), 
        [](auto const &a, auto const &b) { return a[1] < b[1]; });

        int start = p[0][1];
        int count = 1;

        for (int i = 1; i<p.size(); i++){
            if (p[i][0] <= start){
                continue;
            }
            else{
                count++;
                start = p[i][1];
            }
        }

        return count;
    }
};