# READ ABOUT tail recursion
# Recursion is when a function calls itself.
# • Every recursive function has two cases: the base case and the recursive case.
# • A stack has two operations: push and pop.
# • All function calls go onto the call stack.
# • The call stack can get very large, which takes up a lot of memory.

# -------
def get_sum(nums: [int]):
    # if len(nums) == 1:
        # return nums[0]
    if len(nums) == 0:
        return 0
    return nums[0] + get_sum(nums[1:])
# -------
def get_len(nums: [int]):
    if nums == []:
        return 0
    return 1 + get_len(nums[1:])
# -------
def greater(a, b):
    return a if (a > b) else b

def get_max(nums: [int]):
    if len(nums) == 1:
        return nums[0]
    return greater(nums[0], get_max(nums[1:]))
# -------

def binary_search(nums: [int], target: int):
    mid = (len(nums) // 2)
    if nums == []:
        return -1
    if target == nums[mid]:
        return target
    if target > nums[mid]:
        return binary_search(nums[mid + 1:], target)
    else:
        return binary_search(nums[: mid], target)

print(binary_search([1, 2, 3, 4, 5], 2))
