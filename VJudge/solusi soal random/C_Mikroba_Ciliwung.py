import sys

def akselerasi(T):
    # Mengirim perintah AKSELERASI
    print(f"AKSELERASI {T}")
    sys.stdout.flush()  # Pastikan untuk flush output

def eksperimen(X, Y):
    # Mengirim perintah EKSPERIMEN
    print(f"EKSPERIMEN {X} {Y}")
    sys.stdout.flush()  # Pastikan untuk flush output

def main():
    # Baca input awal (N dan M)
    N, M = map(int, input().split())
    
    # Baca papan awal
    papan = [list(map(int, input().strip())) for _ in range(N)]
    
    # Misalnya, strategi: lakukan AKSELERASI T = 1 untuk melihat perubahan
    akselerasi(1)
    
    # Baca kembali papan setelah akselerasi
    papan_baru = [list(map(int, input().strip())) for _ in range(N)]
    
    # Lakukan eksperimen di titik tertentu (misalnya (1, 1))
    eksperimen(1, 1)
    
    # Baca hasil eksperimen
    hasil = int(input())
    
    # Anda harus melanjutkan interaksi berdasarkan hasil eksperimen dan papan baru
    # Terus lakukan AKSELERASI dan EKSPERIMEN sampai semua mikroba hilang

if __name__ == "__main__":
    main()
