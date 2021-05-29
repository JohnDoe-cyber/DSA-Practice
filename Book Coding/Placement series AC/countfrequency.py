



def countFreq(arr):
    hashi = {}
    for i in arr:
        if i in hashi:
            hashi[i] += 1
        else:
            hashi[i] = 1

    for i in hashi:
        print(i, hashi[i])

if __name__ == '__main__':
    arr = [10, 20, 20, 10, 10, 20, 5, 20]
    countFreq(arr)