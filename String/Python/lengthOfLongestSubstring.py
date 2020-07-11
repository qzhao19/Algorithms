class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        """Given a string, find the length of the longest substring without repeating characters.

        Example 1:
            Input: "abcabcbb"
            Output: 3 
            Explanation: The answer is "abc", with the length of 3. 

        """
        strs = []
        max_length = 0
        
        if not s:
            return 0
        
        if len(s) <= 1:
            return len(s)
        
        for x in s:
            if x in strs:
                strs = strs[strs.index(x)+1:]
                
            strs.append(x)
            max_length = max(max_length, len(strs))
            
        return max_length

class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        """Given a string, find the length of the longest substring without repeating characters.

        Example 1:
            Input: "abcabcbb"
            Output: 3 
            Explanation: The answer is "abc", with the length of 3. 

        """
        str_map = {}
        max_length = 0
        
        start = 0
        
        if s is None or len(s)==0 :
            return 0
        
        for index, value in enumerate(s):
            if value in str_map and start <= str_map[value]:
                # max_length = max(max_length, cur_length)
                # cur_length = index - str_map[value]
                start = str_map[value] + 1
            else:
                # cur_length += 1
                max_length = max(max_length, (index - start + 1))
            
            str_map[s[index]] = index
        # return max(max_length, cur_length)    
        return max_length
        

