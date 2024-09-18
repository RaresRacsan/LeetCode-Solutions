class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // variables
        int product = 1, nonZero = 1, onlyOne = 0;
        vector <int> answer;

        // algorithm
        for(int i = 0; i < nums.size(); i++){
            product *= nums[i];
            if(nums[i] != 0)    nonZero *= nums[i];
            else{
                onlyOne++;
            }
        }
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0)
                answer.push_back(product / nums[i]);
            else if(nums[i] == 0 && onlyOne > 1)
                answer.push_back(0);
            else if(nums[i] == 0 && onlyOne == 1)
                answer.push_back(nonZero);
        }
        return answer;
    }
};
