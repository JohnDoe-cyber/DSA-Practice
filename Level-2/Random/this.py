import this
deciphered = ""
for c in this.s:
    try:
        decrypted += this.d[c]
    except:                     # If the symbol is not encrypted
        decrypted += c
print(deciphered)