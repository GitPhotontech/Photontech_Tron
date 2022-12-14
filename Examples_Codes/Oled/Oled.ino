/* PHOTONTECH */
/*
  Oled Yazı Uygulaması
  
  Uygulamada basit bir text yazdırılmıştır. 
  Oled_I2C kütüphanesi incelenerek logo basma, şekiller çizme ve daha bir çok fonksiyonu kullanabilirsiniz. 
   
  Bu örnek kod PHOTONTECH tarafından kamuya sunulmuştur.
  https://github.com/GitPhotontech/Photontech_Tron
 
*/

// Kütüphanemizi tanımladık.
#include <OLED_I2C.h>

// Kullanacağımız fontu tanımladık. Büyük fontlar veya numerik fontlar kullnamak istiyorsanız gerekli tanımlamaları burada yapmalısınız.
extern uint8_t SmallFont[];

OLED myOLED(SDA, SCL, 8);

void setup() {
  // tanımlı oled başaltıldı ve font ayarlandı.
  myOLED.begin();
  myOLED.setFont(SmallFont);
}

void loop() {

  // 1.satır ve 1.sütun konumuna tırnak içindeki ifade yazıldı.
  myOLED.print("Photontech | Tron", 1, 1);
  myOLED.update();
  myOLED.clrScr();

}