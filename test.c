import unittest 
from file import main
# import main

class MyTest(unittest.TestCase): 
    def test_my_function(self):
        self.assertEqual(palindromCheck('abc'), 0)
        
        
if __name__ == '__main__':
    unittest.main()
