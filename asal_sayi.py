def asal_sayi(sayi):
    if sayi == 1:
        return False
    elif sayi == 2:
        return True
    else:
        for i in range(2,sayi):
            if sayi % i == 0:
                return False
        return True

while True:
    sayi = input("Sayı: ")
    if sayi == "q":
        print("Programdan Çıkış Yapılıyor...")
        break
    else:
        sayi = int(sayi)
        if asal_sayi(sayi):
            print("{} asal sayıdır".format(sayi))
        else:
            print("{} asal sayı değildir".format(sayi))
