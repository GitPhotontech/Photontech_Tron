/* PHOTONTECH */
/*
  Servo Uygulaması
  
  11.pin'e bağlı servo motor 180 derece döndürülüyor ve tekrar sıfır derecesine geri getiriliyor.
  Bu işlem sürekli kendini tekrar ediyor.
   
  Bu örnek kod PHOTONTECH tarafından kamuya sunulmuştur.
  https://github.com/GitPhotontech/Photontech_Tron
 
*/


// Servo motor kütüphanesini ekliyoruz.
#include <Servo.h>  

// Kullanacağımız servo motor'u servo1 diye adlandırdık ve tanımladık.
Servo servo1;

// pos değişkenini tanımladık. servo motor'un anlık pozisyon derecesini bu değişken ile ifade edeceğiz.
int pos = 0;   

void setup() {
  //servo1 objesi için pin 11'i kullanacağımızı belirttik ve alt ayarları buna göre yapılandırdık.
  servo1.attach(11); 
}

void loop() {
  for (pos = 0; pos <= 180; pos += 1) { // pos değeri 0'dan 180'e çıkana kadar bu döngü çalışacak.
    // Her adımda pos değeri bir artacak
    servo1.write(pos);              // servomuza her adımda pos değerine göre açılandırıyoruz.
    delay(15);                       // 15ms(mili saniye) bekliyoruz.
  }
  for (pos = 180; pos >= 0; pos -= 1) { // pos değeri 180'den 0'a inene kadar bu döngü çalışacak.
    servo1.write(pos);              // servomuza her adımda pos değerine göre açılandırıyoruz.
    delay(15);                       // 15ms bekliyoruz.
  }
}
