def solve(x, y, z):
    y_1 = y*x/100
    z_1 = z*x/100

    tot_1 = x + y_1 + z_1
    return round(tot_1)