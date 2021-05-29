def hourglassSum(x):
    listy = []
    for i in range(len(x)-2):
        for j in range(len(x[i])-2):
            kimiko = []
            kimiko += x[i][j:j+3]
            kimiko += x[i+1][j+1:j+2]
            kimiko += x[i+2][j:j+3]
            listy.append(sum(kimiko))
    return max(listy)





if __name__ == "__main__":
    print(hourglassSum([[1, 1, 1, 0, 0, 0], [0, 1, 0, 0, 0, 0], [1, 1, 1, 0, 0, 0], [0, 0, 2, 4, 4, 0], [0, 0, 0, 2, 0, 0], [0, 0, 1, 2, 4, 0]]))
