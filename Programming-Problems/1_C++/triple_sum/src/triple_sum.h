/*
    Triple Sum

    Suppose you are given an array of integers nums. Return all the 
    triplets such that nums[i] + nums[j] + nums[k] == 0. The solution 
    must not contain duplicate triplets.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums){
    // sort the original vector 
    sort(nums.begin(), nums.end());
    // create a res vector to add to when we found a triple sum
    vector<vector<int>> res = {};

    for (int i = 0; i < nums.size(); i++) {
        if (i > 0 && nums[i] == nums[i - 1]) {
            continue;
        }
        
        int j = i + 1;
        int k = nums.size() - 1;

        while (j < k) {
            int value = nums[i] + nums[j] + nums[k];

            if (value == 0) {
                res.push_back({nums[i], nums[j], nums[k]});
            
                while (j < k && nums[j] == nums[j + 1])  ++j;  
                while (j < k && nums[k] == nums[k-1])  --k;

                j ++;
                k --;
            }

            else if (value > 0) {
                k --;
            }
            else {
                j++;
            }
        }
    }

    return res;
}