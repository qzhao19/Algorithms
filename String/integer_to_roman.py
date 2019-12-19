class IntegerToRoman(object):
    def __init__(self):
        pass
    def integerToRoman(self, number):
        numbers=[1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1]
        romans=['M', 'CM', 'D', 'CD', 'C', 'XC', 'L', 'XL', 'X', 'IX', 'V', 'IV', 'I']
        result=''
        for i in range(len(numbers)):
            while number>=numbers[i]:
                number-=numbers[i]
                result+=romans[i]
        return result
    def integerToRoman2(self, number):
        result=''
        hash_map={'M':1000, 'CM':900, 'D':500, 'CD':400, 'C':100, 'XC':90, 
                  'L':50, 'XL':40, 'X':10, 'IX': 9, 'V':5, 'IV':4, 'I':1}
        for index, value in hash_map.items():
            while number>=value:
                number-=value
                result+=index
        return result
            
if __name__=="__main__":
    print(IntegerToRoman().integerToRoman(45))
    print(IntegerToRoman().integerToRoman(85))
    print(IntegerToRoman().integerToRoman(43)) 
    print(IntegerToRoman().integerToRoman2(45))
