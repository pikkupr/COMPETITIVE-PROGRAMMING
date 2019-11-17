"""
    User ID: pikkupr
    Problem Type: Practice
    Problem Link: https://www.codechef.com/problems/AMIFIB
"""

import io

# Test Cases
_input_ = io.StringIO("""\
3
3
4
5
""")

# comment this to read from command line
input = _input_.readline

MAX = 10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000

# save the nth fibonacci
fibonacci = []

# geenrate all the fibonacci numbers < num
# and store it in the array - fibonacci
def get_fibonacci(num):
	b = 1
	a = 1
	while b<num:
		fibonacci.append(b)
		b = a+b
		a = fibonacci[-1]
		
# check if a given number is fibonacci or not
def check_fibonacci(num):
	if num in fibonacci:
		return "YES"
	return "NO"

# generate all the fibonacci Nos. upto MAX
get_fibonacci(MAX)

# read number of test cases
t = int(input().strip())

# check fibonacci number for all the test cases
for i in range(t):
	num = int(input())
	print(check_fibonacci(num))
	