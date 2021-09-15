"""
Реализуйте необходимые методы для того, чтобы следующий код выполнился

Должна быть возможность инициализировать LinkedList с помощью списка, или пустым.
"""


class LlIter:
    def __init__(self, head):
        self.current = head

    def __iter__(self):
        return self

    def __next__(self):
        if not self.current:
            raise StopIteration
        else:
            value = self.current.value
            self.current = self.current.next
            return value


class Element:
    def __init__(self, value):
        self.value = value
        self.next = None

    def __str__(self):
        return "'" + self.value + "'" if isinstance(self.value, str) else str(self.value)


class LinkedList:
    def __init__(self, *args):
        self.head = None
        if args != ():
            for i in args[0]:
                self.append(i)

    def append(self, value):
        if self.head is None:
            self.head = Element(value)
            return
        e = self.head
        while e.next is not None:
            e = e.next
        e.next = Element(value)

    def __len__(self):
        e = self.head
        a = 0
        while e is not None:
            a += 1
            e = e.next
        return a

    def get(self, key):
        if key < 0 or key >= len(self):
            raise Exception('Index out of range')
        e = self.head
        a = 0
        while a < key:
            a += 1
            e = e.next
        return e

    def __getitem__(self, key):
        return self.get(key).value

    def __setitem__(self, key, value):
        self.get(key).value = value

    def __delitem__(self, key):
        if key == 0:
            self.head = self.head.next
            return
        if key == len(self) - 1:
            self.get(key - 1).next = None
            return
        self.get(key - 1).next = self.get(key).next

    def __add__(self, other):
        lst = LinkedList()
        e = self.head
        while e is not None:
            lst.append(e.value)
            e = e.next
        e = other.head
        while e is not None:
            lst.append(e.value)
            e = e.next
        return lst

    def __eq__(self, other):
        if len(self) != len(other):
            return False
        e1 = self.head
        e2 = other.head
        while e1 is not None:
            if e1.value != e2.value:
                return False
            e1 = e1.next
            e2 = e2.next
        return True

    def __ne__(self, other):
        return not self == other

    def __iter__(self):
        return LlIter(self.head)

    def __bool__(self):
        return self.head is not None

    def __str__(self):
        e = self.head
        a = []
        while e is not None:
            a.append(str(e))
            e = e.next
        return "|" + " -> ".join(a) + "|"


ll = LinkedList()
ll2 = LinkedList([1, 2, 3])

print(ll)
# empty list should be represented as two pipes (vertical lines)
# ||

print(ll2)
# |1 -> 2 -> 3|

ll2.append('new')
print(ll2)
# |1 -> 2 -> 3 -> 'new'|

print(len(ll2))
# 4

print(ll2[2])
# 3

ll2[2] = 'changed'
print(ll2)
# |1 -> 2 -> 'changed' -> 'new'|

del ll2[1]
print(ll2)
# |1 -> 'changed' -> 'new'|

print('truthy' if ll else 'falsy')
# falsy

print('truthy' if ll2 else 'falsy')
# truthy

ll3 = LinkedList([5, 6])
print(ll2 + ll3)
# |1 -> 'changed' -> 'new' -> 5 -> 6|

ll4 = LinkedList([1, 'changed', 'new'])
print('equal' if ll2 == ll4 else 'not equal')
# equal

print('not equal' if ll2 != ll3 else 'equal')
# not equal

# Если предыдущего покажется маловато, то вот со звездочкой на десерт:
for i in ll2:
    print(i)
