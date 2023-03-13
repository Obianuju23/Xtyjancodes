multiDlijst = [[0]*9 for i in range(9)]
for i in range(9):
     for j in range(9):
        multiDlijst[i][j] = (i+1)*(j+1)
        print(multiDlijst[i][j], end = ", ")
     print()
