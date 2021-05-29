def winningLotteryTicket(x):
    whaty = set(['0', '1', '2', '3', '4', '5', '6', '7', '8', '9'])

    main_at_stake = 0


    x_2 = []
    for i in range(len(x)):
        alpine = list(x[i])
        x_2.append(alpine)
    print(x_2)

    for i in range(len(x_2)-1):
        for j in range(len(x_2)-i-1):
            linux = []
            for k in x_2[i]:
                linux.append(k)
            for l in x_2[i+j+1]:
                linux.append(l)

            linuxy = set(linux)
            
            if linuxy == whaty:
                main_at_stake += 1
            else:
                pass



    print(main_at_stake)




if __name__ == "__main__":
    tickets = ['129300455', '5559948277', '012334556', '56789', '123456879']
    winningLotteryTicket(tickets)