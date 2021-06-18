# def isCovered(ranges, left, right):
#     xxx = [i for i in range(left, right)]

#     isok = []
#     for i in ranges:
#         something = []
#         for k in xxx:
#             if k in i:
#                 something.append(1)
#             else:
#                 something.append(0)
#         if something == []:
#             setra = 0
#         else:
#             isok.append(something)
#             # setra = max(something)
#             # if setra == 1:
#             #     isok.append(1)
#             # else:
#             #     isok.append(0)


#     if isok == []:
#         stemra = 0
        

#     else:
#         stemra = max(isok)
#         ## m*n
#         n = len(isok)
#         m = len(isok[0])


#         notok = [0 for i in range(m)]
#         for i in range(n):
#             for j in range(m):
#                 if i == 0:
#                     notok[j] = isok[i][j]
#                 else:
#                     print(notok[j])
#                     notok[j] = max(notok[j], isok[i][j])

#                 # print("notoksdf", isok[j][i])


#         print(isok)
#         print("notok", notok)

#         allmult = 1
#         for i in notok:
#             allmult *= i
        
#         if allmult == 1:
#             stemra = 1
#         else:
#             stemra = 0


#         # for i in range(isok):
#         #     for kk in range(isok[i]):




    
#     # print(stemra)
#     stemra = False if stemra == 0 else True

#     return stemra












# print(isCovered([[1,2],[3,4],[5,6]], 2, 5))
# print(isCovered([[1,1]], 1, 50))
# print(isCovered([[1,50]], 1, 50))
# print(isCovered(ranges = [[1,10],[10,20]], left = 21, right = 21))
