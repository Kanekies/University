# Задача 1
# a = [1, 2, 3, 4, 5]
#
# sum = 0
# for i in a:
#     sum += i
# print(sum)
#
# i = 0
# while i < len(a):
#     sum += a[i]
#     i += 1
# print(sum)

# Задача 2
# import sys
# filename = sys.argv[0]
# f = open(filename, 'r')
# for line in f:
#     print(line)
# f.close()

# Задача 3
# import sys
# filename = sys.argv[0]
# f = list(open(filename, 'r'))
# f.reverse()
# for line in f:
#     print(line)
# f.close()


# import sys
# filename = sys.argv[0]
# f = open(filename, 'r')
# q = reversed(list(f))
# for line in q:
#     print(line)
# f.close()

# # Задание 3
a = int(input())

arr = [1000, 500, 200, 100, 50, 20, 10]
for i in range(0, len(arr)):
    temp = a // arr[i]
    a %= arr[i]
    print(str(arr[i])+" - " + str(temp), end="; ")

# Задание 4
# a = int(input())
#
# arr = [1, 2, 5, 10, 20, 50, 100, 200, 500, 1000]
# kypur = dict.fromkeys(arr, 0)
#
# for j in range(0, len(arr)):
#     if a == 0:
#         break
#     for i in range(10, 0, -1):
#         if (a - i * arr[j]) == 0 or ((a - i * arr[j]) > 0 and (a - i * arr[j]) % arr[j + 1] == 0):
#             kypur[arr[j]] = i
#             a -= i * arr[j]
#             break
# print(kypur)
