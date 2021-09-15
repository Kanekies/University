from random import randint

_min = 1
_max = 65
rows = 20
filename = 'text.txt'
f = open(filename, 'w')
temp_str = ''
for i in range(0, 20):
    temp_str += str(randint(_min, _max)) + ' ' + str(randint(_min, _max)) + \
                ' ' + str(randint(_min, _max)) + '\n'
f.write(temp_str)