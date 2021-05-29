
class Solution:
    # def sort012(self, arr, n):    
    #     self.zero_arr = []  
    #     self.one_arr = []
    #     self.two_arr = []
    #     for i in range(n):
    #         if arr[i]==0:
    #             self.zero_arr.append(0)
    #         elif arr[i]==1:
    #             self.one_arr.append(1)
    #         else:
    #             self.two_arr.append(2)
    #     arr = self.zero_arr + self.one_arr + self.two_arr
    #     print(arr)
    #     return arr

    def sort012(self, arr, n):    
        zero_arr = []  
        one_arr = []
        two_arr = []
        for i in range(n):
            if arr[i]==0:
                zero_arr.append(0)
            elif arr[i]==1:
                one_arr.append(1)
            else:
                two_arr.append(2)
        # arr = zero_arr + one_arr + two_arr
        print(len(arr))
        # return arr
        print(len(zero_arr), len(one_arr), len(two_arr))
        
        for i in range(len(zero_arr)):
            arr[i] = 0
        # print(arr)
        for i in range(len(zero_arr),len(zero_arr) + len(one_arr)):
            arr[i] = 1
        # print(arr)
        
        for i in range(len(zero_arr) + len(one_arr), len(zero_arr) + len(one_arr) + len(two_arr)):
            arr[i] = 2



if __name__ == '__main__':
    arr = list(map(int, "2 0 2 0 0 1 2 2 2 1 1 0 1 1 1 2 0 1 2 1 0 1 2 0 0 0 2 0 1 0 0 0 1 2 1 1 1 2 1 2 1 2 2 1 1 2 0 2 0 0 1 2 1 2 1 1 2 1 2 0 0 1 0 2 1 1 2 0 2 0 1 2 2 2 2 1 0 1 2 2 0 1 1 1 0 1 2 0 0 2 1 0 0 2 2 1 0 0 0 2 1 0 2 1 0 0 2 0 2 1 2 1 1 1 2 1 1 2 0 1 0 0 2 0 1 2 0 0 2 1 0 0 2 0 2 2 0 2 2 2 0 1 0 2 1 1 0 1 2 1 0 0 2 0 1 0 1 1 2 2 0 1 0 0 0 2 1 0 1 0 2 1 1 1 0 2 2 2 1 0 1 0 1 0 0 0 1 1 0 0 2 0 1 0 1 0 2 2 0 1 0 1 1 2 0 1 2 0 2 2 1 0 2 2 1 1 1 1 1 2 1 1 1 1 1 1 1 0 2 0 2 0 1 0 0 0 2 0 1 2 2 1 0 0 2 0".split(' ')))

    ob = Solution()
    ob.sort012(arr, len(arr))
    for i in arr:
        print(i,end=' ')
