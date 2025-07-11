import math

n, m = map(int, input().split())
result = math.comb(n, m)  # Python 3.8 이상에서 가능
print(result)
