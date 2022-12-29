def tambolenler(sayi):
    tambolen = []
    for i in range(1,sayi+1):
        if sayi % i == 0:
            tambolen.append(i)
    return tambolen
while True:
    sayi = input(("Sayı: "))
    if sayi == "q":
        print("Programdan Çıkılıyor...")
    else:
        sayi = int(sayi)
        print(tambolenler(sayi))
