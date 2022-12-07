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

Kemudian Buat Rangkaian Seperti di Bawah

![Rangkaian 1 Capacitive Touch Sensor](https://user-images.githubusercontent.com/118364435/206262185-fbc98031-c34f-4397-90c3-f707922a080b.PNG)

Keluaran


https://user-images.githubusercontent.com/118364435/206262784-1ab1bc88-945a-49e4-8298-62cbb7e5c8fe.mp4


Kemudian Tambahkan Rangkaian Menjadi 3 LED

Keluaran


https://user-images.githubusercontent.com/118364435/206263362-e9436e50-1487-43fd-ab4b-e49a66f0d020.mp4



**2) Mengakses Sensor DHT 11 (Single Wire/BUS)**

Keluaran (Akses Sensor DHT 11)
![Akses sensor DHT11 (1) (single wire atau BUS)](https://user-images.githubusercontent.com/118364435/206264192-1ff59998-10e4-4afa-822a-ddcc60898d74.jpeg)

Keluaran (Jika suhu 30 derajat, maka LED Merah menyala dan Buzzer berbunyi. Jika tidak, maka LED akan running)


https://user-images.githubusercontent.com/118364435/206264868-dcb22aee-ec0c-4d10-b76e-3456c64fe5b1.mp4



**3) Mengakses Sensor RFID (SPI Communication)**

Keluaran (Akses Sensor RFID)
![Akses sensor RFID 1](https://user-images.githubusercontent.com/118364435/206265429-c641a849-9094-476e-98c7-f76a90b19270.jpeg)

Keluaran (Apabila Tag RFID didekatkan pada Reader, maka LED Hijau akan menyala, servo akan bergerak ke kanan (lalu kembali ke posisi semula setelah 3 detik) dan di Serial Monitor akan tertampil pesan “Akses Diterima, Silahkan Masuk”. Apabila Tag RFID tidak dikenali, maka LED Merah akan menyala, servo tidak bergerak dan di Serial Monitor akan tertampil pesan “Akses Ditolak”)


https://user-images.githubusercontent.com/118364435/206265690-06520ebf-56c9-4a08-931a-dd90f42cf8b7.mp4



