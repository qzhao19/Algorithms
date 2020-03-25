def find_nearest_idx(array, target):
    """Find target indices that represent the nearest value in array
    
    Parameters:
        array: ndarray
               the given numpy array
        target: float
                the taret value that we want to find
    Returns:
        an indices
    """
    if not isinstance(array, np.ndarray):
        array = np.asarray(array)
    
    idx = (np.abs(array - target)).argmin()
    return idx
