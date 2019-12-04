def is_power_three(x):
    if x < 1:
        return -1
        
    while(x%3 == 0):
        x /= 3
        
    return x == 1


is_power_three(27)
