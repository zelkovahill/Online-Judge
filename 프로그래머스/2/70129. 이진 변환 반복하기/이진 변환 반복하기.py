def solution(s):
  
  transformCount = 0
  removedCount = 0
  
  for _ in range(100000):
    if s != '1':
      transformCount += 1
      num = s.count('1')
      removedCount += len(s) - num
      s = bin(num) [2:] 
  


  return [transformCount,removedCount]