def is_power_of_three(x):
    """Given an integer, we determine if it is a power of 3
    Args:
        x: integer
    
    """
    if (x<1):
        return False
    while(x%3 == 0):
        x /= 3
    
    return x == 1

if __name__ == '__main__':
    print(is_power_of_three(27))