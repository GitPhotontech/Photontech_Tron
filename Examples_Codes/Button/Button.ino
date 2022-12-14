/* PHOTONTECH */
/*
  Buton Uygulaması
  
  2.pin'e bağlı butona basıldığında, 3.pin'e bağlı BUZZER öter. 
  Eğer basılmamışsa BUZZER ötmez.
   
  Bu örnek kod PHOTONTECH tarafından kamuya sunulmuştur.
  https://github.com/GitPhotontech/Photontech_Tron
 
*/

// Buton ve Buzzer için pin tanımlamaları yapıldı.
#define BUTON 2          
#define BUZZER 3

// Buton durumunu temsil edecek değişken tanımlandı.
int BUTON_DURUMU = 0;

void setup() {

// Buton giriş olarak ayarlandı.
pinMode(BUTON, INPUT);

// Buzzer çıkış olarak ayarlandı.
pinMode(BUZZER, OUTPUT);

}

void loop() {

 // Buton durumunu okunuyor. Butona basılıp basılmadığı buradan anlaşılır.
  BUTON_DURUMU = digitalRead(BUTON);

  // Buton durumunu kontrol ediliyor. Eğer butona basılmışsa;
  if (BUTON_DURUMU == HIGH) {
    // Buzzer öter,
    digitalWrite(BUZZER, HIGH);
  } else {
    // Basılmamışsa Buzzer ötmez.
    digitalWrite(BUZZER, LOW);
  }

}
