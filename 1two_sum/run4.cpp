//12ms
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> copy = nums;
        vector<int> answer;
        sort(copy.begin(), copy.end());
        auto start = copy.begin();
        auto end = --copy.end();
        while(start < end && *start + *end != target) {
            if(*start + *end < target) {
                ++start;
            }else{
                --end;
            }
        }
        auto pos1 = nums.begin();
        auto pos2 = nums.begin();
        if(*start != *end) {
            pos1 = find(nums.begin(), nums.end(), *start);
            pos2 = find(nums.begin(), nums.end(), *end);
            if(pos1 > pos2) {
                auto temp = pos1;
                pos1 = pos2;
                pos2 = temp;
            }
        }else{
            pos1 = find(nums.begin(), nums.end(), *start);
            pos2 = find(pos1 + 1, nums.end(), *end);
        }
        answer.push_back(pos1 - nums.begin() + 1);
        answer.push_back(pos2 - nums.begin() + 1);
        return answer;
    }
};