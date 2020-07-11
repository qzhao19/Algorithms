
def check_ip(ip1, ip2, mask):
    """
    """
    ip1 = ip1.split('.')
    ip2 = ip2.split('.')
    mask = mask.split('.')
    new_ip1 = []
    new_ip2 = []

    for i in range(len(ip1)):
        new_ip1.append(str(int(ip1[i])&int(mask[i])))
        new_ip2.append(str(int(ip2[i])&int(mask[i])))


    res = 1
    print(new_ip1)
    print(new_ip2)
    for i in range(len(ip1)):
        if new_ip1[i] != new_ip2[i]:
            res = 0
            break

    print(res, '.'.join(new_ip1))

if __name__ == "__main__":
    ip1 = '192.168.1.1'
    ip2 = '192.168.1.2'
    mask = '255.255.255.0'

    check_ip(ip1, ip2, mask)