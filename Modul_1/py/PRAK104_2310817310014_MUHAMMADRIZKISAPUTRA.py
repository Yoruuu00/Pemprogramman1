a = 400000
b = 350000
DiskonSepatu_A = 13
DiskonSepatu_B = 21
HasildiskonA =a * DiskonSepatu_A / 100
HasildiskonB =b * DiskonSepatu_B / 100
SetelahdiskonA = int (a - HasildiskonA)
SetelahdiskonB = int (b - HasildiskonB)
print('Harga sepatu a bernilai \n', a)
print('Harga Sepatu b bernilai \n', b)
print('Sepatu A mendapat diskon 13% sehingga harga menjadi', SetelahdiskonA)
print('Sepatu B mendapat diskon 21% sehingga harga menjadi', SetelahdiskonB)
