import math

A, B = input("").split()

C = round(math.sqrt(int(B) ** 2 - int(A) ** 2))

KELILING = round(int(A) + int(B) + int(C))
LUAS = round((int(C) * int(A)) / 2)

print(f"Alas : {C} cm")
print(f"Tinggi : {A} cm")
print(f"Keliling : {KELILING} cm")
print(f"Luas : {LUAS} cm^2")
