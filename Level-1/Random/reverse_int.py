
x = input()

stringy = str(x)


if stringy[0] == '-':
    stringy2 = stringy[1:]
    new_stringy = ''
    for i in range(1, len(stringy2)+1):
        new_stringy += stringy2[-i]

    new_stringy2 = '-'
    if stringy[0] == '-':
        new_stringy2 += new_stringy
    new_int = int(new_stringy2)
else:
    new_stringy = ''
    for i in range(1, len(stringy)+1):
        new_stringy += stringy[-i]
    new_int = int(new_stringy)

if -(2**31)<new_int<(2**31 - 1):
    print(new_int)
else:
    print(0)

