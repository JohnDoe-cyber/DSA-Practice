

def reverse(listy, start, stop):
    if start < stop - 1:
        listy[start], listy[stop-1] = listy[stop-1], listy[start]
        reverse(listy, start+1, stop-1)
    return listy



shock = [1,2,3,4,54,55,45]

print(reverse(shock, 0, len(shock)))
