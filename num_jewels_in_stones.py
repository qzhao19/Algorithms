def num_jewels_in_stones(jewels, stones):
    """
    
    """
    count = 0
    for jewel in jewels:
        count += stones.count(jewel)
    return count
if __name__ == '__main__':
    print(num_jewels_in_stones('aA', 'aAAbbb'))