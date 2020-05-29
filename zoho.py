x="WELCOMETOZOHOCORPORATION"
t=0
for i in range(0,5):
 for j in range(0,5):
   if (t=='\0')or( t==24):
     break
   else:
     print(x[t],end=" ")
     t=t+1
 print("\r")

'''
n=input()
for i in range(len(n)):
  for j in range(len(n)):
    if  i==j:
        print(n[j],end=" ")
    elif (i+j)==len(n)-1:
        print(n[j],end=" ")
    else:
        print(end=" ")
  print("\r")
'''
