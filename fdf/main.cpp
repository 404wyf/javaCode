#include <iostream>
#include <vector>
#include <algorithm>
#include<cstdio>
#include<cstdlib>
using namespace std;
int maxSubarraySum( vector<int>& nums) {
    int n = nums.size();

    if (n == 0) {
        return 0;
    }

    int maxSum = nums[0];
    int currentSum = nums[0];

    for (int i = 1; i < n; ++i) {
        currentSum =  max(currentSum + nums[i], nums[i]);
        maxSum =  max(maxSum, currentSum);
    }

    return maxSum;
}

int main() {
    vector<int> nums ;
     string in;
     cin>>in;

    char *p;
    p=strwok(in,",");
   while(p!=null){
    nums.push_back(p.praseInt())
   }


    int result = maxSubarraySum(nums);
    cout << "Êä³ö: " << result <<  endl;

    return 0;
}
