str=input()
def myfunc(str):
    s=''
    for i in range(len(str)):
        if i%2==0:
            s+=(str[i].lower())
        else:
            s+=(str[i].upper())
    print(s)
