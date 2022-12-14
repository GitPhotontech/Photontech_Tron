/* PHOTONTECH */
/*
  Buzzer Uygulaması
  
  4. ve 12. pinlere bağlı ultrasonic sensör ile mesafe ölçümü yapılmıştır.
  Ölçülen mesafe seri haberleşme ile ekrana yazdırılmıştır.
  
  Bu örnek kod PHOTONTECH tarafından kamuya sunulmuştur.
  
  https://github.com/GitPhotontech/Photontech_AlphaBoard
 
*/

//Pin tanımlamaları yapıldı
#define trigPin 4
#define echoPin 12

// Değişken tanımlamaları yapıldı
long sure;
long mesafe;

void setup () {
  //Seri haberleşme başlatıldı.
  Serial.begin(9600);

  // Kullanılacak pinler giriş ve çıkış olarak konfigüre edildi.
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  
}
void loop () {

  // Süre ölçümü için trigPin ile dalgalar gönderiliyor.
  digitalWrite(trigPin, LOW);
  delayMicroseconds(3);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // echoPin ile dalgalar cisimlere çarpıp geliyor ve arada geçen süre hesaplanıyor.
  sure = pulseIn(echoPin, HIGH);

  // Dalgaların havadaki hızı dikkate alınarak ve süre bilgisi 
  // kullanılarak mesafe bilgisi elde ediliyor.
  mesafe = (sure/2) * 0.0343;

  // Mesafe bilghisi seri port haberleşme ile PC'ye gönderiliyor.
  Serial.print(mesafe);
  Serial.println(" cm uzaklıkta");

  // 500ms (mili saniye) bekleme.
  delay(500);
}
