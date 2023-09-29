import math


alas = 5
tinggi = 12
miring = math.sqrt((alas**2) + (tinggi**2))
keliling = 5 + 12 + miring
luas = 0.5*alas*tinggi


print("Diketahui : ")
print("Alas = {} cm".format(alas))
print("Tinggi = {} cm".format(tinggi))

print("\nJawab : ")
print("SISI A = {} cm".format(tinggi))
print("SISI B = {:.0f} cm".format(miring))
print("SISI C = {} cm".format(alas))
print("Keliling = {:.0f} cm".format(keliling))
print("Luas = {:.0f} cm".format(luas))





