class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> res;

        intervals.push_back(newInterval);
        sort(intervals.begin(), intervals.end());

        int n = intervals.size();
        int i = 1;

        // pushing the first interval into the res 
        res.push_back(intervals[0]);
        while(i < n){
            // checking if the next interval is overlapping the last one
            if(intervals[i][0] <= res.back()[1]){
                // if the new interval has a greater end than the old one
                if(intervals[i][1] > res.back()[1]){
                    res.back()[1] = intervals[i][1];
                }
            }
            // if the intervals are not overlapping
            else{
                // push the new interval into the res
                res.push_back(intervals[i]);
            }
            i++;
        }
        return res;
    }
};
