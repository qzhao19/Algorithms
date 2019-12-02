def reverse_word(strings):
    """

    """
    words = strings.split(' ')
    i, j = 0, len(words) - 1

    while i < j:
        words[i], words[j] = words[j], words[i]
        i += 1
        j -= 1
    
    return ' '.join(words)

reverse_word('That is a boy')
