def Solution(stringOri):
    volvels = []
    stringRevese = []
    contVolvels = -1

    for i in range(len(stringOri)):
        if stringOri[i] in 'aeiouAEIOU':
            volvels.append(stringOri[i])

    for i in range(len(stringOri)):
        if stringOri[i] in 'aeiouAEIOU':
            stringRevese.append(volvels[contVolvels])
            contVolvels -= 1
        else:
            stringRevese.append(stringOri[i])


    return "".join(stringRevese)


print(Solution("hello"))



#