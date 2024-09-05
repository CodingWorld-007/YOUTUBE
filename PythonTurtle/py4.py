from calendar import *
import simple_colors
year = int(input("Enter the Year"))
S = calendar(year)
Coloured_S = simple_colors.green(S)
print(Coloured_S)