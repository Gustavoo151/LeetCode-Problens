def Solution(nums: List[int], target) -> List[int]:
    for i in range(0,len(nums)):
        for c in range(i, len(nums)):
            if(nums[i] + nums[c] == target):
                    return [i,c]                  
    
nums = input().split()
target = int(input())

print(Solution(nums, target))