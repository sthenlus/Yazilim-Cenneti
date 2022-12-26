sayi = input("Bir sayı giriniz: ")
toplam = 0
for i in sayi:
    toplam += int(i)**len(sayi)

if toplam == int(sayi):
    print("Bu sayı bir armstrong sayıdır.")
else:
    print("Bu sayı bir Armstrong sayısı değildir.")
