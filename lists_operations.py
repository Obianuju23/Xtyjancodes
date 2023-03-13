numlist = [2,5,9,7,4]

numlist.append(2)
print(numlist)
numlist.insert(3, 8)
print(numlist)
numlist.pop(0)
print(numlist)
numlist.insert(len(numlist), 2)
print(numlist)
numlist.sort()
print(numlist)
numlist.reverse()
print(numlist)
numlist.remove(2)
print(numlist)

#List comprehension operations

evenlist = [i*2 for i in range (10)]
#for i in evenlist:give me the anser on  straight line
   # print(i)
print(evenlist)

#To raise each element of the list to powers 2, 4 and 5 respectively.

import math
numlist = [1,2,3,4,5]
listofvalues= [[math.pow(a, 2), math.pow(a, 3), math.pow(a,4)] for a in numlist]
for i in listofvalues:
    print(i)
print()   
