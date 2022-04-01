from random import choice

print(20000)
for i in range(20000):
    x = choice([i for i in range(1, 10)])
    print(x, end=" ")

