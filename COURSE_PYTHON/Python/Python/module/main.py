def spam(number):
    return 'bulochka' * number

    # return ['bulochka' for i in range(number+1)]


def my_sum(list_of_numbers):
    pass
    temp = 0
    for i in list_of_numbers:
        temp = temp + i
    return temp


def shortener(string):
    # Функция получает на вход длинную строку с множеством слов.
    # Она должна вернуть ту же строку, но в словах, которые длиннее 6 символов,
    # функция должна вместо всех символов после шестого поставить одну звездочку.
    # Пример: Из слова 'verwijdering' должно получиться 'verwij*'
    pass
    return " ".join(map(lambda x: x if len(x) <= 6 else x[:6] + "*", str(string).split()))


def compare_ends(words):
    # Функция получает на вход массив строк. Вернуть надо количество строк,
    # которые не короче двух символов и у которых первый и последний
    # символ совпадают.
    pass
    newArray = [i for i in words if len(i) >= 2 and i[0] == i[len(i) - 1]]
    return len(newArray)


sourceStrings = (
    'A very looooooong wooooord',
    'Loremia ipsumia dolaria sitia ameti',
    'Have you ever been to Lituania ?',
    'Anyone who reads Old and Middle',
    'English literary texts will be familiar',
    'with the mid-brown volumes of the EETS,',
    'with the symbol of Alfreds jewel embossed on the front cover+'
)
print(shortener(sourceStrings))
