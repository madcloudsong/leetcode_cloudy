//30+ms
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
    	vector<int> answer;
    	map<int, int> tag;
        for(int i = 0 ; i < size ; ++i){
        	tag[nums[i]] = i;
        }
        for(int j = 0 ; j < size ; ++j) {
        	int index = target - nums[j];
        	map<int,int>::iterator iter = tag.find(index);
        	
        	if(iter != tag.end()) {
        	    int value = iter->second;
        	    if(value != j) {
            		answer.push_back(j + 1);
        			answer.push_back(value + 1);
        			return answer;
        	    }
        	}
        }
    }
};