import math

phi = 3.14
banyak_putaran = 5
jumlah_kilometer = 14

# Berarti kita harus mencari dalam 1 putaran pa dengklek menempuh berapa kilometer
keliling_satuputaran = 14 / 5

# Kita cari jari-jarinya
# Keliling = 2 * phi * jari-jari
# Jari-jari = keliling / (phi * 2)

jarijari = keliling_satuputaran / (phi * 2)
jarijari = round(jarijari, 2)

print("Diketahui :")
print("Pak Dengklek mengelilingi taman = {} Putaran".format(banyak_putaran))
print("Jarak tempuh Pak Dengklek = {} Kilometer\n".format(jumlah_kilometer))

print("Jawaban :")
print("Jari-jari taman yang dikelilingi Pak Dengklek adalah {} Kilometer".format(jarijari))
