
def palindrome(stringy):
    yes_or_no = 1

    i = 0
    # while i < (len(stringy)//2)+1:
    for i in range(len(stringy)):
        if stringy[i] == stringy[len(stringy)-i-1]:
            yes_or_no *= 1
        else:
            yes_or_no *= 0

        i += 1
    return yes_or_no



if __name__ == '__main__':
    print(palindrome("dog"))
    print(palindrome("abbcbba"))

    
