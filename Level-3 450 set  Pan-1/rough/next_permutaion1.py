class Solution:
    def stringify(self, nums):
        stringy = ''
        for i in range(len(nums)):
            stringy += '{0}'.format(nums[i])
        return stringy
    
    def nextPermutation(self, nums) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        initial_nums = nums

        stringy = self.stringify(nums)
        original_stringy = self.stringify(nums)
        # print(stringy)

        temp1 = sorted(nums, reverse=True)
        stringy2 =  self.stringify(temp1)
        reverse_sort_integer = int(stringy2)
        # print(reverse_sort_integer)

        xpedia = -1
        while xpedia != reverse_sort_integer:
            # print("I'm running inside while")
            inty = int(stringy) + 1
            # print("inty", inty)
            if inty > reverse_sort_integer:
                break
            else:    
                stringy_comparision = str(inty)
                # print(list(map(int , stringy_comparision)))
                # print(list(map(int , stringy)))
                xpedia = int(self.stringify(sorted(list(map(int , stringy_comparision)), reverse=True)))
                stringy = str(inty)

        # print("stringy", stringy)
        for i in range(len(stringy)):
            nums[i] = int(stringy[i])

        if stringy == original_stringy:
            nums = sorted(nums)
        # print(nums == initial_nums)
        # print(original_stringy == )

        return nums



if __name__ == '__main__':
    obj = Solution()
    print(obj.nextPermutation([2, 3, 1]))