def timeconversion(x):

    smt = x[8:]
    ktk = x[:2]

    if smt == 'PM' and int(ktk) < 12 :
        a_1 = x[2:8]
        a_2 = str(int(x[:2]) + 12)

        a = a_2 + a_1
        print(a)

    
    elif smt == 'AM' and ktk == '12':
        a_1 = x[2:8]
        a_2 = '00'

        a = a_2 + a_1
        print(a)

    elif smt == 'PM' and ktk == '12':
        a_1 = x[:8]
        print(a_1)

    else:
        a_1 = x[:8]
        print(a_1)






if __name__ == "__main__":
    timeconversion('07:05:45PM')
    timeconversion('12:05:45AM')
    timeconversion('12:05:45PM')
    timeconversion('07:05:45AM')

