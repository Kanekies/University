import collections
from random import randint

# # # Задание для 1 таблицы
# # def get_size(international_size, target):
# #     dictionary = {
# #         'S': {
# #             'Russia': 40,
# #             'Germany': 34,
# #             'USA': 6,
# #             'France': 36,
# #             'UK': 8
# #         },
# #         'M': {
# #             'Russia': (42, 43, 44),
# #             'Germany': (36, 37, 38),
# #             'USA': (8, 9, 10, 11),
# #             'France': (38, 39, 40),
# #             'UK': (8, 9, 10)
# #         },
# #         'L': {
# #             'Russia': (46, 47, 48, 49, 50),
# #             'Germany': (40, 41, 42, 43, 44),
# #             'USA': (12, 13, 14, 15, 16),
# #             'France': (42, 43, 44, 45, 46),
# #             'UK': (14, 15, 16, 17, 18),
# #         },
# #         'XL': {
# #             'Russia': (50, 51, 52, 53),
# #             'Germany': (44, 45, 46, 47),
# #             'USA': (16, 17, 18, 19),
# #             'France': (46, 47, 48, 49),
# #             'UK': (18, 19, 20, 21),
# #         },
# #         'XXL': {
# #             'Russia': 54,
# #             'Germany': 48,
# #             'USA': 20,
# #             'France': 50,
# #             'UK': 22
# #         }
# #     }
# #     return dictionary[international_size][target]
# #
# #
# # print(get_size('M', 'USA'))
# # Задание для 3 таблицы
# # def get_size(international_size, target):
# #     dictionary = {
# #         '0': {
# #             'Russia': (21, 22),
# #             'Germany': 0,
# #             'USA': 8,
# #             'France': 0,
# #             'UK': 8
# #         },
# #         '1': {
# #             'Russia': (21, 22),
# #             'Germany': 1,
# #             'USA': float(8, 5),
# #             'France': 1,
# #             'UK': float(8, 5)
# #         },
# #         '2': {
# #             'Russia': 23,
# #             'Germany': 1,
# #             'USA': 9,
# #             'France': 1,
# #             'UK': 9,
# #         },
# #         '3': {
# #             'Russia': 23,
# #             'Germany': 3,
# #             'USA': float(9, 5),
# #             'France': 3,
# #             'UK': float(9, 5),
# #         },
# #         '4': {
# #             'Russia': 25,
# #             'Germany': 4,
# #             'USA': 10,
# #             'France': 4,
# #             'UK': 10
# #         },
# #         '5': {
# #             'Russia': 25,
# #             'Germany': 5,
# #             'USA': float(10, 5),
# #             'France': 5,
# #             'UK': float(10, 5),
# #         },
# #         '6': {
# #             'Russia': 27,
# #             'Germany': 6,
# #             'USA': 11,
# #             'France': 6,
# #             'UK': 11,
# #         }
# #     }
# #     return dictionary[international_size][target]
# #
# #
# # print(get_size('M', 'USA'))
# # result = {}
# # def add_letter(letr):
# #     for i in letr:
# #         result[i] = result.get(letr) is None and 1 or result[i]+1
#
# # s = 'a word and another word'
# # c = collections.Counter(s)
#
# filename = "test.txt"
# f = open(filename, 'r')
# text = f.readline()
# c = collections.Counter(text)
# print(c)
# Пузырьковая сортировка
N = 20
a = []
for i in range(N):
    a.append(randint(0, 99))
print(a)

for i in range(N - 1):
    for j in range(N - i - 1):
        if a[j] > a[j + 1]:
            a[j], a[j + 1] = a[j + 1], a[j]

print(a)