def matchingStrings(s, q):
    main_count = []
    for i in range(len(q)):
        count_i = 0
        for j in range(len(s)):
            if q[i] == s[j]:
                count_i += 1
            else:
                pass
        main_count.append(count_i)

    print(main_count)

    stringy = ''
    for pk in main_count:
        stringy += str(pk) + "\n"
    print(stringy)

matchingStrings(['def','de','fgh'], ['de','lmn','fgh'])