n = int(input(""))

inputs = []
ans = []

i = 0

for i in range(n):
  a,b = map(int, input().split())
  inputs.append((a,b))
 
for i in range(n):
  count = 1
  for j in range(n):
    if(inputs[i][0] <  inputs[j][0] and inputs[i][1] < inputs[j][1]):
      count += 1
  ans.append(count)

for i in ans:
  print(i, end=" ")