s = list('History  is the study of the past. Events occurring before the invention of' \
         'writing systems are considered prehistory. "History" is an umbrella term that relates' \
         'to past events as well as the memory, discovery, collection, organization, presentation,' \
         'and interpretation of information about these events. Historians place the past in context' \
         'using historical sources such as written documents, oral accounts, ecological markers,' \
         'and material objects including art and artifacts.')
for i in s:
    if i == 'a':
        del s[s.index(i)]

str_s = 'History  is the study of the past. Events occurring before the invention of' \
        'writing systems are considered prehistory. "History" is an umbrella term that relates' \
        'to past events as well as the memory, discovery, collection, organization, presentation,' \
        'and interpretation of information about these events. Historians place the past in context' \
        'using historical sources such as written documents, oral accounts, ecological markers,' \
        'and material objects including art and artifacts.'
str_s = "".join([x for x in str_s if not x == 'a'])

three_s = 'History  is the study of the past. Events occurring before the invention of' \
          'writing systems are considered prehistory. "History" is an umbrella term that relates' \
          'to past events as well as the memory, discovery, collection, organization, presentation,' \
          'and interpretation of information about these events. Historians place the past in context' \
          'using historical sources such as written documents, oral accounts, ecological markers,' \
          'and material objects including art and artifacts.'
q = three_s.find('Historians place the past in context' + 'using historical') # на всякий случай, вдруг будет похожее предложение

four_s = 'History  is the study of the past. Events occurring before the invention of' \
        'writing systems are considered prehistory. "History" is an umbrella term that relates' \
        'to past events as well as the memory, discovery, collection, organization, presentation,' \
        'and interpretation of information about these events. Historians place the past in context' \
        'using historical sources such as written documents, oral accounts, ecological markers,' \
        'and material objects including art and artifacts.'
print(str_s)
print("".join(s))
print(str_s.replace("a", ''))
print(three_s[:q])
print(four_s.split('.'))
