import unittest 
from file import main
# import main

class MyTest(unittest.TestCase): 
    def test_my_function(self):
        self.assertEqual(main('-1'), 0),
  self.assertEqual(main('2'), factorial),
        
        
if __name__ == '__main__':
    unittest.main()
