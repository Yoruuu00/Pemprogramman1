a = int(input())

if 1 <= a <= 10:
    print("satuan")
elif a == 0:
    print("Nol")
elif a >= 100:
    print("Anda menginput Melebihi Limit Bilangan")
elif 20 <= a <= 99:
    print("Puluhan")
else:
    print("Belasan")
