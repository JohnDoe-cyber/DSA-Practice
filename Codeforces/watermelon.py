


if __name__ == "__main__":
    n = int(input())
    divi = n/2
    # print(divi)

    if type(divi) == int or (divi == int(divi)):
        if divi%2 == 0:
            print("YES")
        else:
            print("NO")

    else:
        print("NO")
    # print(type(3))