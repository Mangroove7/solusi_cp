import random 


n = input("Masukkan operasi : \n")
while True:
    if n == '+':
        a = random.randint(1,100)
        b = random.randint(1,100)
        print("Berapa hasil dari :",a,"+",b,"? : ")
        hasil = int(input())
        if hasil == a + b:
            print("Jawaban benar\n")
            ulang = input("apakah ulang?(y/n) : ")
            if ulang == 'y':
                continue
            else:
                break
        else:
            print("salah\n")
    if n == '-':
            a = random.randint(1,100)
            b = random.randint(1,100)
            print("Berapa hasil dari :",a,"-",b,"? : ")
            hasil = int(input())
            if hasil == a - b:
                print("Jawaban benar\n")
                ulang = input("apakah ulang?(y/n) : ")
                if ulang == 'y':
                    continue
                else:
                    break
            else:
                print("salah\n")