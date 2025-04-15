/*
 * Given a sorted array of positive integers, rearrange the array alternately i.e first element should be the maximum value, second minimum value, third-second max, fourth-second min and so on.

*/
#include<iostream>
#include<vector>
using namespace std;
class MaxMinForm{
	public:
		void maxMinForm(vector<int> &nums){
			int n = nums.size() -1 ; // max index
			int md = nums[n]+1; // modulo divisor should be one greater than the largest element in the array
			for(int i = 0 ; i <= n ; i++){
				int j = i / 2; 
				if (i % 2 == 0){
					j = n - j;
				}
				//cout<<"j="<<j<<"\n";
				if(nums[j] > md){
					int k = nums[j] % md;
					nums[i] = nums[i] + (k * md) ; 
				}
				else {
					nums[i] = nums[i] + (nums[j] * md );
				}
				//cout<<"nums["<<i<<"]="<<nums[i]<<"\n";
			}
			for(int i = 0 ; i<=n ; i++){
				nums[i] = nums[i]/md;
			}
		}
};
int main(){
	vector<int> nums = {1,2,3,4,5,10,20,30,40,44};
	MaxMinForm obj;
	obj.maxMinForm(nums);
	for(auto a:nums){
		cout<<a<<",";
	}
	cout<<"\n";
}
