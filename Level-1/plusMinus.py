def plusMinus(arr):
    listy = [0,0,0]
    for i in arr:
        if i>0:
            listy[0] +=1
        if i<0:
            listy[1] += 1
        if i==0:
            listy[2] += 1
        
    # print(listy)
    lent = len(arr)
    # print(lent)
    for i in range(len(listy)):
        listy[i] = round(listy[i]/lent, ndigits=6)
        print(listy[i])
    

if __name__ == "__main__":
    plusMinus([-4, 3, -9, 0, 4, 1])