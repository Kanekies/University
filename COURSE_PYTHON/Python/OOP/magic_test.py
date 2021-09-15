import unittest

from magic import LlIter, LinkedList, Element


class LinkedListTest(unittest.TestCase):
    def setUp(self):
        self.e = Element(10)
        self.empll = LinkedList()
        self.ll = LinkedList([1, 2, 3, 4, 5])
        return super().setUp()

    def tearDown(self):
        return super().tearDown()

    def test_print_emptyll(self):
        self.assertEqual(str(self.empll), '||')

    def test_print_ll(self):
        self.assertEqual(str(self.ll), '|1 -> 2 -> 3 -> 4 -> 5|')

    def test_appendLL(self):
        self.ll.append('6')
        self.assertEqual(str(self.ll), "|1 -> 2 -> 3 -> 4 -> 5 -> '6'|")

    def test_append_emptyLL(self):
        self.empll.append('6')
        self.assertEqual(str(self.empll), "|'6'|")

    def test_length_empll(self):
        self.assertEqual(len(self.empll), 0)

    def test_length_ll(self):
        self.assertEqual(len(self.ll), 5)

    def test_element_by_index_empll(self):
        with self.assertRaises(Exception) as ir:
            print(self.empll[0])
        self.assertTrue('Index out of range' in str(ir.exception))

    def test_element_by_index_ll(self):
        self.assertEqual(self.ll[3], 4)

    def test_set_element_by_index_empll(self):
        with self.assertRaises(Exception) as ir:
            self.empll[3] = 11
        self.assertTrue('Index out of range' in str(ir.exception))

    def test_set_element_by_index_ll(self):
        self.ll[3] = 11
        self.assertEqual(str(self.ll), '|1 -> 2 -> 3 -> 11 -> 5|')

    def test_del_element_be_index_empll(self):
        with self.assertRaises(Exception) as ir:
            del self.empll[3]
        self.assertTrue('Index out of range' in str(ir.exception))

    def test_del_element_be_index_ll(self):
        del self.ll[3]
        self.assertTrue(str(self.ll), '|1 -> 2 -> 3 -> 5|')

    def test_empll_to_bool(self):
        self.assertFalse(self.empll)

    def test_ll_to_bool(self):
        self.assertTrue(self.ll)

    def test_merge_empll_empll(self):
        self.assertEqual(str(self.empll + self.empll), '||')

    def test_merge_empll_ll(self):
        self.assertEqual(str(self.empll + self.ll), '|1 -> 2 -> 3 -> 4 -> 5|')

    def test_merge_ll_ll(self):
        self.assertEqual(str(self.ll + self.ll), '|1 -> 2 -> 3 -> 4 -> 5 -> 1 -> 2 -> 3 -> 4 -> 5|')

    def test_equal_empll(self):
        self.assertTrue(self.empll == self.empll)

    def test_equal_ll(self):
        self.assertTrue(self.ll == self.ll)

    def test_not_equal_true(self):
        self.assertTrue(self.empll != self.ll)

    def test_not_equal_false(self):
        self.assertFalse(self.empll != self.empll)

    def test_for_each(self):
        a = []
        for i in self.ll:
            a.append(i)
        self.assertEqual(a, [1, 2, 3, 4, 5])
