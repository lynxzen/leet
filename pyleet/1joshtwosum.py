from typing import List

def twoSum(nums: List[int], target: int) -> List[int]:
    Dict = {}
    result = []
    for index, item in enumerate(nums):
        print(index, item)
        Dict[index] = item
        index += 1
    for f, s in Dict.items():
        print(f,s)

num = [2, 7, 11, 15]
twoSum(num, 9)
