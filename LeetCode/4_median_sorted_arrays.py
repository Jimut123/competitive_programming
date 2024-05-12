class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """
        merge_array = nums1 + nums2
        merge_array.sort()
        if len(merge_array)%2 == 0:
            median_idx1 = int(len(merge_array)/2)-1
            median_idx2 = int(len(merge_array)/2)
            # print(median_idx1," -- ",median_idx2)
            # print(merge_array[median_idx1]," -- ",merge_array[median_idx2])
            median = float(merge_array[median_idx1] + merge_array[median_idx2])/2
        else:
            median_idx = int(len(merge_array)/2)
            median = merge_array[median_idx]
            # print(median)
        return median