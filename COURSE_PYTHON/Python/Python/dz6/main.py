# Задание 1
# def get_dict_with_average(dictionary):
#     return dict(map(lambda item: (item[0], sum(item[1]) / len(item[1])), list(dictionary.items())))
#
#
# def krasav4ik(dictionary):
#     temp_dict = get_dict_with_average(dictionary)
#     result = max(temp_dict, key=temp_dict.get)
#     return result
#
#
# def loh(dictionary):
#     temp_dict = get_dict_with_average(dictionary)
#     result = min(temp_dict, key=temp_dict.get)
#     return result
#
#
# dict1 = {
#     'Semiatichko Gleb': [5, 5, 5, 5, 5],
#     'Kubariev Ilya': [4, 5, 4, 5, 4],
#     'John Doe': [2, 3, 3, 2, 2]
# }
#
# print(krasav4ik(dict1))
# print(loh(dict1))


# # Задание 2
# def get_students_with_2_or_more_groups(students):
#     result = dict(map(lambda student: student if len(student[1]) >= 2 else (None, None), list(students.items())))
#     result.pop(None, None)
#     return result
#
#
# def get_students_not_in_frontend(students):
#     result = dict(
#         map(lambda student: student if 'FrontEnd' not in student[1] else (None, None),
#             list(students.items())))
#     result.pop(None, None)
#     return result
#
#
# def get_students_in_python_or_java(students):
#     result = dict(map(lambda student: student if 'Python' in student[1] or 'Java' in student[1] else (None, None),
#                       list(students.items())))
#     result.pop(None, None)
#     return result
#
#
# dict2 = {
#     'Semiatichko Gleb': ['Python'],
#     'Kubariev Ilya': ['Python', 'FrontEnd', 'FullStack'],
#     'Jane Doe': ['FullStack'],
#     'John Doe': ['Java']
# }
#
# print(get_students_with_2_or_more_groups(dict2))
# print(get_students_not_in_frontend(dict2))
# print(get_students_in_python_or_java(dict2))

# Задание 3
# def get_size(international_size, target):
#     dictionary = {
#         'XXS': {
#             'Russia': 42,
#             'Germany': 36,
#             'USA': 8,
#             'France': 38,
#             'UK': 24
#         },
#         'XS': {
#             'Russia': 44,
#             'Germany': 38,
#             'USA': 10,
#             'France': 40,
#             'UK': 26
#         },
#         'S': {
#             'Russia': 46,
#             'Germany': 40,
#             'USA': 12,
#             'France': 42,
#             'UK': 28
#         },
#         'M': {
#             'Russia': 48,
#             'Germany': 42,
#             'USA': 14,
#             'France': 44,
#             'UK': 30
#         },
#         'L': {
#             'Russia': 50,
#             'Germany': 44,
#             'USA': 16,
#             'France': 46,
#             'UK': 32
#         },
#         'XL': {
#             'Russia': 52,
#             'Germany': 46,
#             'USA': 18,
#             'France': 48,
#             'UK': 34
#         },
#         'XXL': {
#             'Russia': 54,
#             'Germany': 48,
#             'USA': 20,
#             'France': 50,
#             'UK': 36
#         },
#         'XXXL': {
#             'Russia': 56,
#             'Germany': 50,
#             'USA': 22,
#             'France': 52,
#             'UK': 38
#         }
#     }
#     return dictionary[international_size][target]
#
#
# print(get_size('XXS', 'USA'))




cart = [3, 4, 12, 17, 19, 21, 23, 26, 30]
cashier = []
cashier = list(map(lambda x: x, cart))
print(cashier)
