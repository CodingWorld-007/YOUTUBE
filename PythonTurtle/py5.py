#save file name with .py extension 
#two modules required calendar, simple_colors 
import calendar 
import simple_colors
text = "ENTER THE YEAR"
colored = simple_colors.yellow(text)
print(colored)
year = int(input())
m = 0
for i in range(12):
    m+=1
    if(m==1):
        C1 = calendar.month(year, m)
        col1 = simple_colors.green(C1)
        print(col1)
    if(m==2):
        C1 = calendar.month(year, m)
        col1 = simple_colors.yellow(C1)
        print(col1)
    if(m==3):
        C1 = calendar.month(year, m)
        col1 = simple_colors.red(C1)
        print(col1)
    if(m==4):
        C1 = calendar.month(year, m)
        col1 = simple_colors.black(C1)
        print(col1)
    if(m==5):
        C1 = calendar.month(year, m)
        col1 = simple_colors.blue(C1)
        print(col1)
    if(m==6):
        C1 = calendar.month(year, m)
        col1 = simple_colors.green(C1)
        print(col1)
    if(m==7):
        C1 = calendar.month(year, m)
        col1 = simple_colors.red(C1)
        print(col1)
    if(m==8):
        C1 = calendar.month(year, m)
        col1 = simple_colors.black(C1)
        print(col1)
    if(m==9):
        C1 = calendar.month(year, m)
        col1 = simple_colors.yellow(C1)
        print(col1)
    if(m==10):
        C1 = calendar.month(year, m)
        col1 = simple_colors.green(C1)
        print(col1)
    if(m==11):
        C1 = calendar.month(year, m)
        col1 = simple_colors.red(C1)
        print(col1)
    if(m==12):
        C1 = calendar.month(year, m)
        col1 = simple_colors.blue(C1)
        print(col1)










