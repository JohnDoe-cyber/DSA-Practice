import os

def disk_usage(path):
    total = os.path.getsize(path)         ## immediate disk space
    # print('{0:<5}'.format(total), path)              ## {0:<20}  is very helpful for spacing
    if os.path.isdir(path):
        for filename in os.listdir(path):
            childpath = os.path.join(path, filename)
            total += disk_usage(childpath)
    
    print('{0:<5}'.format(total), path)              ## {0:<20}  is very helpful for spacing
    return total



disk_usage('/home/dgk/Documents/Codes/3- IDE coding/Random/Bun-1/Bash')


# pathy= '/home/dgk/Documents/Codes/3- IDE coding/Random/Bun-1/Bash'

# print(os.path.getsize(pathy))


