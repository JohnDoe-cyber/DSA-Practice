

def maxProfit(prices):
    n = len(prices)
    cost = 0
    min_price = prices[0]
    max_cost = 0

    for i in range(n):
        min_price = min(min_price,prices[i])
        
        ## cost upfront
        cost = prices[i] - min_price

        ##max_cost by max of cost and previous max_cost
        max_cost = max(max_cost, cost)
    return max_cost










print(maxProfit([7,1,5,3,6,4]))
print(maxProfit([2,4,1]))
