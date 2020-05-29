'''
W E L C O 
M E T O Z 
O H O C O 
R P O R A 
T I O N 
'''
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
