#!/usr/bin/python3
"""Unittest for max_integer([..])
"""
import unittest
max_integer = __import__('6-max_integer').max_integer


class TestMaxInteger(unittest.TestCase):

    def test_max_integer(self):
        # Test with a list of positive integers
        self.assertEqual(max_integer([1, 2, 3, 4]), 4)

        # Test with a list of negative integers
        self.assertEqual(max_integer([-1, -3, -4, -2]), -1)

        # Test with a list of mixed positive and negative integers
        self.assertEqual(max_integer([-1, 2, -3, 4]), 4)

        # Test with a list containing only one integer
        self.assertEqual(max_integer([42]), 42)

        # Test with an empty list
        self.assertIsNone(max_integer([]))

        # Test with a list containing floating-point numbers
        self.assertEqual(max_integer([1.5, 2.5, 3.0]), 3.0)

        # Test with a list containing a mix of integers and floating numbers
        self.assertEqual(max_integer([1, 2.5, 3]), 3)


if __name__ == '__main__':
    unittest.main()
