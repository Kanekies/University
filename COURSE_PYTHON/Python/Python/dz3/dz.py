# Задача 3
filename = 'text.txt'
f = open(filename, 'r')
temp_str = ''
for line in f:
    temp_arr = line.split()
    for i in range(1, int(temp_arr[2])):
        if not (i % int(temp_arr[0])) and not (i % int(temp_arr[1])):
            temp_str += 'FB '
        elif not (i % int(temp_arr[1])):
            temp_str += 'B '
        elif not (i % int(temp_arr[0])):
            temp_str += 'F '
        else:
            temp_str += str(i) + ' '
    temp_str += '\n'
f.close()

f = open('result.txt', 'w')
f.write(temp_str)
