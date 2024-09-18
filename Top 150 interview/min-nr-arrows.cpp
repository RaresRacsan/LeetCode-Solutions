class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end());
        int result = 1, i = 1, j = 0, mini = points[0][0], maxi = points[0][1];

        while (i < points.size()) {
            if (points[i][0] > maxi) {
                mini = points[i][0];
                maxi = points[i][1];
                result++;
            } else {
                mini = max(mini, points[i][0]);
                maxi = min(maxi, points[i][1]);
            }
            i++;
        }

        return result;
    }
};
