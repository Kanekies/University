n = int(input())
if n % 2 == 0:
    print('Четное\n')

else:
    print('Не четное\n')

p = int(input())
if (p % 3 == 0) and (p % 5 == 0) and (p % 10) and (p % 2):
    print('число подходит для 2 задачи\n'+'его делители')
else:
    print('число не подходит для 2 задачи\n'+'его делители')
for i in range(1, p):
    if p % i == 0:
        print(i, end=" ")
print()
d = str(input())
k = len(d)
i = 1
while i <= k:
    print(f'{d[i-1]} * {10 ** (k-i)}')
    i += 1

