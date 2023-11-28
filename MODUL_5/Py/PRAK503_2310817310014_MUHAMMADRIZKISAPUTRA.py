def maksimal(a, b):
    if a > b:
        return a
    else:
        return b

def minimal(a, b):
    if a < b:
        return a
    else:
        return b

batas = 0
maks = -100000
minim = 100000

bilangan = int(input("Masukkan bilangan: "))
while batas < bilangan:
    
    nilai_list = [int(x) for x in input("Masukkan nilai: ").split()]
    
    for nilai in nilai_list:
        maks = maksimal(maks, nilai)
        minim = minimal(minim, nilai)
        batas += 1

print(f"Nilai maksimal dan minimal adalah: {maks} {minim}")
