
## Not necessarily the right one

class Solution:
    def leftRotate(self, arr, n, d):
        if d == 0:
            return arr
        else:
            a1 = arr[0:d]
            a2 = arr[d:n]
            
            start = 0 
            end = d
            while(start<end):
                rando = a1[start]
                a1[start] = a1[end-1]
                a1[end-1] = rando
                start += 1
                end -= 1 
                
            start = d
            end = n
            while(start<end):
                rando = a2[start]
                a2[start] = a2[end-1]
                a2[end-1] = rando
                start += 1
                end -= 1 
                
                
            arra = a1 + a2
            
            start = 0 
            end = n
            while (start< end):
                rando = arra[start]
                arra[start] = arra[end-1]
                arra[end-1] = rando
                start += 1
                end -= 1 
            
            return arra