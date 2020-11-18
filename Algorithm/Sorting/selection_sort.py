# O(n^2)

def get_max(n: [int]):
    largest, index = n[0], 0
    for i in range(len(n)):
        if n[i] > largest:
            largest = n[i]
            index = i
    return index

def sort(nums: [int]):
    sorted_list = []
    for i in range(len(nums)):
        max_num = nums.pop(get_max(nums))
        sorted_list += [max_num]
    return sorted_list


print(sort([2,4,1,8,6,7]))
