a, lambang = input("Masukkan bilangan kelipatan :").split()
a = int(a)

angka = 1

while angka <= 50:
    if angka % a == 0:
        print(f"{angka} {lambang}",end=" ")
    else:
        print(angka, end=" ")

    if angka % 5 == 0:
        print(end="")

    angka += 1  

print("\n")
