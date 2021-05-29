def reverseArray(x):
    y = []
    for i in range(len(x)):
        y.append(x.pop())
    return y




if __name__ == "__main__":
    reverseArray([1, 4, 3, 2])