import math

# # Задание 1.1
# def _lower(st):
#     return st.lower()
# 
# 
# def _upper(st):
#     return st.upper()
# 
# 
# s2 = "привод к верхнему регистру"
# s = "ПРИВОД К НИЖНЕМУ РЕГИСТРУ"
# print(_lower(s))
# print(_upper(s2))
# 
# s3 = ['loRem ipsum doLOr sit amet consedRActed advising elite facilities',
#       'dais morbid vestibule imperiled frames nec dictum',
#       'penalties noscitur saddles mus']
# s4 = ['LOREM IPSUM DOLOR SIT AMET CONSECRATED ADVISING ELITE FACILITIES',
#       'DAIS MORBID VESTIBULE IMPERILED FRAMES NEC DICTUM',
#       'PENALTIES NOSCITUR SADDLES MUS']
# print(list(map(_upper, s3)))
# print(list(map(_lower, s4)))

# Задание 1.2
# def is_prime(num):
#     for i in range(2, math.ceil(math.sqrt(num)) + 1):
#         if not num % i:
#             return False
#     return True
#
#
# def _square(num):
#     return is_prime(num) and num ** 2 or num
#
#
# lst = [i for i in range(1, 50)]
# n = int(input())
# print(_square(n))
# print(list(map(_square, lst)))

# Задание 1.3
result = {}


def add_word(word):
    result[word] = result.get(word) is None and 1 or result[word]+1
    return word


filename = "text.txt"
f = open(filename, 'r')
text = list(map(lambda x: x.strip(), f.readlines()))
text = "".join(text).split()

list(map(add_word, text))

print(result)

