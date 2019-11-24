
numbers = []
max_ = 0

for k in range(1,10):

    line = input("line : ")

    for i in line:
        numbers.append(int(i))

    a = 1

    for i in range (0, len(numbers)-13):
        for j in range (i, i+13):
            a = a * numbers[j]
        if a > max_:
            max_ = a
        a = 1

print("max ", max_)
