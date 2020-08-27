class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
            
        map<int,int> mymap;
        map<int,int>::iterator it;
        
        // time: O(n), space: O(n)
        for (int i = 0; i < nums.size(); i++) {
            int remain = target - nums[i];
            
            it = mymap.find(remain);
            if (it != mymap.end()) { // found
                ans.push_back(mymap[remain]);
                ans.push_back(i);
                return ans;
            }
            
            mymap[nums[i]] = i;
            
            // if sorted
            /*int head_idx = i;
            int tail_idx = nums.size();
            
            int cur_idx = (head_idx + tail_idx) / 2;
            int last_idx = -1;
            
            while (nums[cur_idx] != remain && cur_idx != last_idx) {
                if (nums[cur_idx] > remain) {
                    tail_idx = cur_idx;
                }
                    
                else {
                    head_idx = cur_idx;
                }
                
                last_idx = cur_idx;
                cur_idx = (head_idx + tail_idx) / 2;
            }
            
            if (nums[i] + nums[cur_idx] == target) {
                ans.push_back(i);
                ans.push_back(cur_idx);
                break;
            }*/
        }
        
        return ans;
    }
};
