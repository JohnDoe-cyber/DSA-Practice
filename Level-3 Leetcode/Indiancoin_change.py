


def IndiancoinChange(coins, amount):
    coins = sorted(coins)
    print(coins)
    i = len(coins) - 1
    nocoins = 0
    while amount != 0:
        # if i == -1:
        #     nocoins = -1
        #     break
        nocoins += amount//coins[i]
        amount = amount%coins[i]
        i -= 1
        print(nocoins)
        
    print(nocoins)









# coinChange([1,2,5], 11)
# coinChange([1], 2)
# coinChange([1], 0)
# coinChange([2], 3)
coinChange([186,419,83,408], 6249)

