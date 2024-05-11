#include<iostream>
#include<vector>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> returnVector;
        vector<int>::iterator vectorIterator1, vectorIterator2;
        int num1 = 0, num2 = 0;
        for(vectorIterator1 = nums.begin(); vectorIterator1 != nums.end(); ++vectorIterator1)
        {
            num1 = *vectorIterator1;
            for(vectorIterator2 = next(vectorIterator1); vectorIterator2 != nums.end(); ++ vectorIterator2)
            {
                num2 = target - num1;
                if(*vectorIterator2 == num2)
                {
                    returnVector.push_back(std::distance( nums.begin(), vectorIterator1 ));
                    returnVector.push_back(std::distance( nums.begin(), vectorIterator2 ));
                    return returnVector;
                }
                   
            }
        }
        
    }
};