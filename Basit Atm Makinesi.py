print("""********************** 

ATM Makinesine Hoşgeldiniz.

İşlemler;

1.Bakiye Sorgulama

2.Para yatırma

3.Para Çekme

Çıkmak için q ya basınız

********************""")
bakiye = 1000
while True:
    a = input("Yapacağınız İşlemi Seçiniz:")
    if a == "q":
        print("Yine bekleriz...")
        break
    elif a == "1":
        print("Bakiyeniz {} tldir".format(bakiye))
    elif a == "2":
        miktar = int(input("Miktarı Giriniz:"))
        bakiye +=miktar
        print("İşlem Tamamlandı Yeni Bakiyeniz {}".format(bakiye))
    elif a =="3":
        miktar = int(input("Miktarı Giriniz:"))
        if bakiye-miktar < 0:
            print("Mevcut Bakiye Yetersiz!!!")
            continue
        bakiye -= miktar
        print("Yeni Bakiyenız {} tldir".format(bakiye))
    else:
        print("Hatalı İşlem girildi")
        continue
