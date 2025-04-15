#include<vector>
#include<iostream>
using namespace std;
class MaxProd {
	public:
		int maxProdSumWithRotate(const vector<int> &nums){
			int curProd = 0;//current product of the iteration
			int maxProd;// maximum product seen so far
			int sumOfElems = nums[0];// sum of all elements in the array

			for(int i = 1 ; i<nums.size();i++){
				sumOfElems += nums[i];
				curProd += (nums[i]*i);
			}
			maxProd = curProd;
			cout<<maxProd<<","<<sumOfElems<<"\n";
			for(int i = nums.size() - 1; i > 0 ; i--){
				curProd = curProd + sumOfElems - (nums[i]*nums.size());
				maxProd = std::max(maxProd,curProd);
			}
			return maxProd;

		}
};
int main(){
	vector<int> nums = {1,-2,-3};
	MaxProd maxProd;
	std::cout<<maxProd.maxProdSumWithRotate(nums)<<"\n";
	return 1;
}
