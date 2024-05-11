# O(n^2)

# class Solution(object):
#     def twoSum(self, nums, target):
#         """
#         :type nums: List[int]
#         :type target: int
#         :rtype: List[int]
#         """
#         l = []
#         for i in range(len(nums)):
#             for j in range(i+1,len(nums)):
#                 if nums[i] + nums[j] == target:
#                     print([i,j])
#                     l = [i,j]
#                     break
#             else:
#                 continue
#             break
#         return l

class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        # set up a dictionary which has number to index mapping
        dict_nums_index = {}
        for i in range(len(nums)):
            dict_nums_index[nums[i]] = i
        for i in range(len(nums)):
            if (target - nums[i]) in dict_nums_index and dict_nums_index[target - nums[i]] != i:
                return [i, dict_nums_index[target - nums[i]]]
        return []


