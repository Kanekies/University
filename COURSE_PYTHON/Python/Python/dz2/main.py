# # Задание 1
# print("Give it to me!")
# number = int(input())
# if number >= 100:
#     print("Thanks, man!")
# elif (number > 10) and (number < 100):
#     print("OK :(")
# else:
#     print("WHAT????")
#
# if number > 1000:
#     print("!!!!POWWOW!!!")
#
# test = True
# result = 'Test is True' if test else 'Test is False'
# print(result)
# # result = 'Test is True'
#
# test = True
# print('ttt' if test else 'fff')  # выведет ttt
#
# test = True
# result = test and 'Test is True' or 'Test is False'

# Задание 2
# test = True
# result = 'Дз успешно сделано если вы это прочитали' if test else 'Я забыл его скинуть'
# print(result)
#
# test = False
# result = 'Лучше выйди покури, это не твое' if test else 'Оно идеально и просто'
# print(result)
#
# test = True or False
# result = 'Дз успешно сделано если вы это прочитали' if test else 'Я забыл его скинуть'
# print(result)
# #  result = 'Дз успешно сделано если вы это прочитали'
#
# test = True and False
# result = 'Дз успешно сделано если вы это прочитали' if test else 'Я забыл его скинуть'
# print(result)
# # result = 'Я забыл его скинуть'

# Задаание 3
q = 0
print('Введите 1 число: ')
a = int(input())
print('Введите 2 число: ')
b = int(input())
print('Введите 3 число: ')
c = int(input())

for i in range(1, c):
    if i % a == 0 and i % b:
        print('F')
    elif i % b == 0 and i % a:
        print('B')
    elif i % a == 0 and i % b == 0:
        print('FB')
    else:
        print(i)
