#  uses divide n conquer
# The average runtime of quicksort is O(n log n)



def sort(nums: [int]):
    if len(nums) < 2: # base case
        return nums 
    pivot = nums[len(nums) // 2]
    right, left = [], []
    for i in nums:
        if i < pivot:
            left += [i]
        elif i > pivot:
            right += [i]
    return sort(left) + [pivot] + sort(right)

print(sort([1,5,2,8,4]))
