

def rept(x):
    kl = bin(x)[2:].split("0")
    len_list = []
    for i in kl:
        len_list.append(len(i))
    
    karma = max(len_list)
    return karma




# print(rept(13))
# print(rept(20))

if __name__ == '__main__':
    n = int(input())
    rept(n)