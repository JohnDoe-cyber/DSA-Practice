
#     A
#    ABA
#   ABCBA


# x = "ABC"
x = "12345"

for j in range(len(x)):
    pp = x[0:j+1]
    print("", end=" "*(len(x)-j))
    for i in range(len(pp)):
        print(pp[i], end="")

    for i in range(len(pp)-2, -1, -1):
        print(pp[i], end="")

    print("")
