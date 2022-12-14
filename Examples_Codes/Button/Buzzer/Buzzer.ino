/* PHOTONTECH */
/*
  Buzzer Uygulaması
  
  3.pin'e bağlı buzzer'ın kademeli şiddetlerde öttürülmesi gerçekleştirilmiştir.
  
  Bu örnek kod PHOTONTECH tarafından kamuya sunulmuştur.
  
  https://github.com/GitPhotontech/Photontech_AlphaBoard
 
*/

// Buzzer için pin tanımlaması yapıldı.
#define BUZZER 3

void setup() {
  // Buzzer çıkış olarak ayarlandı.
  pinMode(BUZZER, OUTPUT);
}

void loop() {
  // Buzzer'a giden voltaj kademeli olarak artırılıyor.
  for(int siddet=0;siddet<=10;siddet++) //Şiddet adında bir değişken tanımlandı.
  {
    analogWrite(BUZZER,siddet); // Buzzer'ın voltaj değeri şiddet değişkeni ile orantılı bir şekilde artıyor.
    delay(1000);                // 1 saniye bekleme
    analogWrite(BUZZER,0);      // buzzer'ı susturuldu
    delay(1000);                // 1 saniye bekleme
  }
}
