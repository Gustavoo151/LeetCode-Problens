def Solution(array, target):
    for i in range(1,len(array)):
        for j in range(2, len(array)):
            if eval(array[i]) + eval(array[j]) == eval(target):
                return [i-1, j-1]


num = input().replace(',','')
target = input()

print(Solution(num, target))