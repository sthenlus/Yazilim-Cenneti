print("""***************************************

1.Toplama İşlemi



2.Çıkarma İşlemi



3.Çaprma İşlemi



4.Bölme İşlemi

**************************************"""""
      )

a = int(input("Birinci Sayıyı Giriniz: "))
b = int(input("İkinci Sayıyı Giriniz: "))

c = int(input("İşlemi Seçiniz"))

if c == 1:
    print("{} ile {} Toplamı {} dır".format(a,b,a+b))
elif c == 2:
    print("{} ile {} Çıkarması {} dır".format(a,b,a-b))
elif c == 3:
    print("{} ile {} Çarpmımı {} dır".format(a,b,a*b))
elif c == 4:
    print("{} ile {} Bölümü {} dır".format(a,b,a/b))

else:
    print("Geçersiz işlem girildi!!!!")

