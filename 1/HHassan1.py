array = [i for i in range(1,1001)]
total = 0
for i in array:
    if i%3==0 or i%5==0:
        total+=i
print(total)
