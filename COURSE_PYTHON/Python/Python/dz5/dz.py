# # Задача 2
# def fizzbuzz(line):
#     def fb(num):
#         if not (num % int(split_line[0])) and not (num % int(split_line[1])):
#             return 'FB'
#         elif not (num % int(split_line[1])):
#             return 'B'
#         elif not (num % int(split_line[0])):
#             return 'F'
#         else:
#             return str(num)
#
#     split_line = line.split()
#     arr = list(range(1, int(split_line[2])))
#     result = " ".join(list(map(fb, arr)))
#     return result
#
#
# filename = "tex.txt"
# f = open(filename, 'r')
# text = f.readlines()
# text = list(map(lambda line: line.strip(), text))
# text = "\n".join(list(map(fizzbuzz, text)))
#
# f = open('result.txt', 'w')
# f.write(text)


# Задача 3
dict_one = {'name': 'John', 'last_name': 'Doe', 'job': 'Python Consultant'}
dict_two = {'name': 'Jane', 'last_name': 'Doel', 'job': 'Community Manager'}
new_job = ['Java ebir']
dict_one = ['job']

for (k1, v1), (k2, v2) in zip(dict_one.items(), dict_two.items()):
    print(k1, '->', v1)
    print(k2, '->', v2)
