def rotateLeft(d, x):
    for i in range(d):
        k = x.pop(0)
        x.append(k)
    print(x)




    # Here the auxiliary space is O(1) and Time complexity is -




kk = "431 397 149 275 556 362 852 789 601 357 516 575 670 507 127 888 284 405 806 27 495 879 976 467 342 356 908 750 769 947 425 643 754 396 653 595 108 75 347 394 935 252 683 966 553 724 629 567 93 494 693 965 328 187 728 389 70 288 509 252 449".split(" ")
# print(kk)

a1 = [1, 2, 3, 4, 5]


# rotateLeft(48, kk)
rotateLeft(3, a1)