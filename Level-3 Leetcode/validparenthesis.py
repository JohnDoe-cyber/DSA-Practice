
def isinvert(a,b):
    if (a == '}' and b == '{'):
        return True
    elif (a == ')' and b == '('):
        return True
    elif (a == ']' and b == '['):
        return True
    else:
        return False

def isValid(s):
    valid = False
    
    stak = []
    # stak.append(s[0])
    # print(stak)
    # print(stak[0])
    # print(s[0])

    for i in range(len(s)):
        if stak == []:
            stak.append(s[i])
        else:
                
            print(s[i], stak[-1])
            if isinvert(s[i], stak[-1]):    ## Note here the s[i]  will be of type '}' and stak[-1] will be of type '{'
                stak.pop(-1)
            else:
                stak.append(s[i])

    # print(stak)

    if stak == []:
        print("balanced")
    else:
        print("Not Balanced")












if __name__ == '__main__':
    isValid("{}{{{{[][][[[")
    isValid("{[()]}")