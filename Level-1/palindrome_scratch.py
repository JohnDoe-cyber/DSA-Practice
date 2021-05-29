def pali(x):
    front = []
    back = []
    if len(x)%2 == 0:
        return "Not a palindrome!"
    else:
        x = list(x)
        for i in range(len(x)//2):
            front.append(x.pop(0))
            back.append(x.pop())
        if front == back:
            return "Its a Palindrome!"
        else:
            return "Its not a Palindrome!"






if "__main__" == __name__:
    print(pali("racecas"))