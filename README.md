# Protokol-Komunikasi-dan-Sensor

ESP32 adalah nama dari mikrokontroler yang dirancang oleh perusahaan yang berbasis di Shanghai, China yakni Espressif Systems. ESP32 menawarkan solusi jaringan WiFi dan BLE. ESP32 menggunakan prosesor dual core yang berjalan di instruksi Xtensa LX16. Selain itu, ESP32 telah mendukung protokol komunikasi seperti I2C, UART dan SPI.

**ALAT DAN BAHAN**
1) ESP32
2) Breadboard
3) Kabel jumper
4) Sensor DHT 11, RFID
5) LED (5) dan Push Button (3)
6) Servo
7) Resistor 330,1K, 10K Ohm (@ 3)

**HASIL KELUARAN**

**1) ESP32 Capacitive Touch Sensor**

**Raw Data**

Keluaran Serial Monitor
![ESP32 capacitive touch sensor (serial monitor)](https://user-images.githubusercontent.com/118364435/206261314-8de300af-fe98-4e43-bf56-384c46bd8b1d.jpeg)

Keluaran Serial Plotter
![ESP32 capacitive touch sensor (serial plotter)](https://user-images.githubusercontent.com/118364435/206261668-a6dbc3b5-83bd-4f4f-9a5f-58a3c701b6a7.jpeg)

Keluaran Serial Plotter (disentuh)
![ESP32 capacitive touch sensor (serial plotter) disentuh](https://user-images.githubusercontent.com/118364435/206261734-b1ba2eef-1255-4720-9054-9243f330ed98.jpeg)

Analisa : Pada percobaan ini diambil data (Raw Data) dari serial monitor dan plotter dari rangkaian dan script yang dijalankan. Percobaan ini digunakan touch sensor. Jadi apabila kabel jumper yang terhubung ke pin touch sensor disentuh, maka pada serial monitor dapat dilihat nilai yang keluar akan semakin bertambah dan pada serial plotter pun grafik/sinyal akan berada pada ambang atas. Sedangkan jika kabel jumper touch sensor tidak disentuh, maka nilai akan semakin berkurang dan grafik/sinyal menunjukkan pada ambang bawah.

**Kemudian Buat Rangkaian Seperti di Bawah**

![Rangkaian 1 Capacitive Touch Sensor](https://user-images.githubusercontent.com/118364435/206262185-fbc98031-c34f-4397-90c3-f707922a080b.PNG)

Keluaran


https://user-images.githubusercontent.com/118364435/206262784-1ab1bc88-945a-49e4-8298-62cbb7e5c8fe.mp4


Analisa :Pada percobaan ini ditambahkan 1 LED. Pada keluaran didapatkan, apabila jumper touch sensor disentuh, maka LED akan menyala, dan LED akan mati jika jumper tidak disentuh. 

**Kemudian Tambahkan Rangkaian Menjadi 3 LED Agar Menyala Running**

Keluaran


https://user-images.githubusercontent.com/118364435/206263362-e9436e50-1487-43fd-ab4b-e49a66f0d020.mp4



Analisa : Pada percobaan ini digunakan 3 LED. Dari keluaran didapatkan, apabila jumper touch sensor disentuh, maka LED akan menyala running dari kanan ke kiri lalu kiri ke kanan. Dengan menambahkan LED menjadi 3, otomatis script yang digunakan juga akan berbeda.

**2) Mengakses Sensor DHT 11 (Single Wire/BUS)**

**Mengakses Sensor DHT 11**

Keluaran 
![Akses sensor DHT11 (1) (single wire atau BUS)](https://user-images.githubusercontent.com/118364435/206264192-1ff59998-10e4-4afa-822a-ddcc60898d74.jpeg)

Analisa : Pada percobaan ini, digunakan sensor DHT11 (sensor suhu). Dari script yang digunakan, sensor DHT11 berada pada pin GPIO 4. Hasil keluaran yang diinginkan pun meliputi nilai dari Humadity, Celcius, dan Fahrenheit. Ketika script di run, maka sensor suhu akan mendeteksi suhu ruangan sekitar, dan hasil yang didapatkan adalah seperti gambar keluaran di atas.

**Kondisi jika suhu 30 derajat, maka LED Merah menyala dan Buzzer berbunyi. Jika tidak, maka LED akan running**

Keluaran 


https://user-images.githubusercontent.com/118364435/206264868-dcb22aee-ec0c-4d10-b76e-3456c64fe5b1.mp4



Analisa : Di percobaan ini masih menggunakan sensor suhu DHT11. Namun, pada percobaan ini ditambahkan buzzer dan LED. Kondisi yang diinginkan adalah jika suhu mencapai 30 derajat, maka LED merah akan menyala dan buzzer akan berbunyi. Namun jika suhu tidak mencapai 30 derajat, maka LED akan menyala running. Ini dibuktikan dengan melihat hasil keluaran di atas.

**3) Mengakses Sensor RFID (SPI Communication)**

**Mengakses Sensor RFID**

Keluaran 
![Akses sensor RFID 1](https://user-images.githubusercontent.com/118364435/206265429-c641a849-9094-476e-98c7-f76a90b19270.jpeg)

Analisa : Di percobaan ini menggunakan sensor RFID, dimana sensor ini menggunakan kartu putih yang memiliki MAC Address tersendiri. Sebelum keluaran bertuliskan "Access is granted" dan di script belum terisi MAC Addressnya, ketika kartu diarahkan ke sensor, maka akan muncul MAC Address dari kartu tersebut. Lalu, alamat tersebut dimasukkan kedalam script pada bagian MAC Address. Script di run lagi, dan arahkan kartu ke sensor RFID, jika tereteksi benar, maka keluaran di serial monitor akan bertuliskan "Access is granted".

**Kondisi apabila Tag RFID didekatkan pada Reader, maka LED Hijau akan menyala, servo akan bergerak ke kanan (lalu kembali ke posisi semula setelah 3 detik) dan di Serial Monitor akan tertampil pesan “Akses Diterima, Silahkan Masuk”. Apabila Tag RFID tidak dikenali, maka LED Merah akan menyala, servo tidak bergerak dan di Serial Monitor akan tertampil pesan “Akses Ditolak”**

Keluaran 


https://user-images.githubusercontent.com/118364435/206265690-06520ebf-56c9-4a08-931a-dd90f42cf8b7.mp4




Analisa : Pada percobaan ini masih menggunakan sensor RFID. Di percobaan ini ditambahkan servo dan 2 LED. Dari MAC Address yang dimasukkan, jika alamatnya benar, maka LED akan berwarna hijau dan servo akan bergerak ke kanan lalu kembali ke posisi semula setelah 3 detik, serta pada serial monitor tertera "Akses Diterima". Namun, jika sensor membaca bukan alamatnya, maka LED akan menyala merah dan servo tidak bergerak, serta pada serial monitor tertera "Akses Ditolak".


**KESIMPULAN**
1) Capacitive Touch Sensor merupakan percobaan menggunakan ESP32 dengan sensor sentuh. Dengan script yang sesuai, dan ketika jumper (yang sebagai touch sensor) disentuh, maka keluaran yang kita inginkan akan terlihat, seperti misalnya menampilkan raw data dari hasil sensor dan LED nyala/mati (dalam percobaan).
2) Penggunaan sensor DHT11 adalah untuk sensor suhu. Dari sensor ini dapat dilihat nilai suhu keadaan sekitar. Sensor ini juga bisa dikombinasikan dengan buzzer (bip) dan LED. Jadi ketika menginginkan derajat suhu sekian, buzzer akan menyala dan LED akan menyala merah. Dan apabila derajat suhu tidak mencapai yang diinginkan maka buzzer tidak berbunyi dan LED berwarna hijau.
3) Sensor RFID merupakan sensor yang menggunakan MAC Address pada kartunya. Jadi, harus diketahui lebih dulu alamat MACnya agar bisa melakukan pembacaan. Seperti pada percobaan yang digabungkan dengan LED dan servo, jika kartu yang ditempelkan ke sensor terbaca dengan benar maka LED berwarna hijau dan servo bergerak, namun jika tidak terbaca (salah alamat), maka LED berwarna merah dan servo mati.
