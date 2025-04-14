#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
	int maxProduct(vector<int>& nums) {
		int mp = nums[0];
		int cMax , cMin;
		cMax = cMin = nums[0];
		for(int i = 1 ; i<nums.size();i++){
			std::cout<<cMax<<","<<cMin<<"\n";
			if(nums[i]<0)
				std::swap(cMax,cMin);
			std::cout<<cMax<<","<<cMin<<"\n";
			cMax = std::max(nums[i],nums[i]*cMax);
			cMin = std::max(nums[i],nums[i]*cMin);
			std::cout<<cMax<<","<<cMin<<"\n";
			mp = max(mp,cMax);
		}
		return mp;
	}
};

int main(){
	vector<int> nums = {-4,-3};
	Solution sol;
	cout<<sol.maxProduct(nums);
	return 1;
}
