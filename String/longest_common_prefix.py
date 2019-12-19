class LongestCommonPrefix(object):
    def __init__(self):
        pass
    def longestCommonPrefix(self, str_list):
        """input type strings: list[string] str=["hello", "heabc", "hewww"] 
           output type: string "he"
        """
        # check if string
        if not str_list:
            return ''
        longest=str_list[0]
        for i in range(len(str_list[0])):
            for string in str_list:
                if len(string)<=i and str_list[0][i]!=string[i]:
                    return str_list[0][:i]
        return str_list[0]
    def longestCommonPrefix2(self, str_list):
        if not str_list:
            return ''
        else:
            # we assume the min substring is str_list[0]
            min_sub_str=str_list[0]
            for sub_str in str_list:
                if len(sub_str)<len(min_sub_str):
                    min_sub_str=sub_str
            for sub_str in str_list:
                if sub_str==min_sub_str:
                    continue
                for i in range(len(min_sub_str)):
                    if sub_str[i]==min_sub_str[i]:
                        i+=1
                    elif i==0:
                        return 0
                    else:
                        min_sub_str=min_sub_str[:i]
                        break
            return min_sub_str

if __name__=="__main__":
    print(LongestCommonPrefix().longestCommonPrefix(["hello", "heabc", "hewww"]))
    print(LongestCommonPrefix().longestCommonPrefix2(['abcdj', 'abcdef', 'abcdekljjh', 'abcdelopqwe']))
