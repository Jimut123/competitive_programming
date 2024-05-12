class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        if len(s) == 0 or len(s) == 1: 
            return len(s)
        longest_len = 1
        subseq_arr = []
        i = 0; j = 1
        subseq_arr.append(s[i])
        while i < len(s) and j < len(s):
            if s[j] in subseq_arr:
                while s[j] in subseq_arr:
                    subseq_arr = subseq_arr[1:]
                    i += 1
                subseq_arr.append(s[j])
            else:
                subseq_arr.append(s[j])
                if longest_len < len(subseq_arr):
                    longest_len = len(subseq_arr)
            # print(subseq_arr)
            j += 1
        return longest_len
