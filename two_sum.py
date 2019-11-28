def two_sum(array, target):
    """Given an array of integers, return indices of the two numbers such that they add up to a specific target.
       You may assume that each input would have exactly one solution, and you may not use the same element twice.
       Example:
            Given nums = [2, 7, 11, 15], target = 9,
            Because nums[0] + nums[1] = 2 + 7 = 9,
            return [0, 1]
    """
    hash_map = {}
    for indice, value in enumerate(array):
        hash_map[value] = indice
    
    for indice, value in enumerate(array):
        if int(target - value) in hash_map:
            if indice != hash_map[target - value]:
                return indice+1, hash_map[target - value]+1

two_sum([2, 7, 11, 15], 9)
