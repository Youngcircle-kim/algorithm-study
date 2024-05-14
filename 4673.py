
def SelfNum(n):
    strN = str(n)
    ans = n
    for i in strN:
        ans+= int(i)

    return ans

list_1=[]    
list_2=[]    
for i in range(10000):
    a=SelfNum(i+1)
    if(a<10000):
        list_1.append(a)

for i in range(10000):
    list_2.append(i+1)

set_1 = set(list_1)

for i in set_1:
    list_2.remove(i)

print(list_2)