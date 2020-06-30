lst = [4,5,12,-2,8,9]
lst2 = []
for x in lst:
    if 10-x in lst2:
        print (x,'and',10-x)
    else:
        lst2.append(x)