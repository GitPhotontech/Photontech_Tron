/* PHOTONTECH */
/*
  Motor Sürücü Test Uygulaması
  
  Motorlar ileri ve geri yönde hareket edecekler. 
   
  Bu örnek kod PHOTONTECH tarafından kamuya sunulmuştur.
  https://github.com/GitPhotontech/Photontech_Tron
 
*/

// Motor 1 pinleri
int in1 = 5;
int in2 = 6;
// Motor 2 pinleri
int in3 = 9;
int in4 = 10;

void setup() {
	// Tüm çıkışlar set edildi
	pinMode(in1, OUTPUT);
	pinMode(in2, OUTPUT);
	pinMode(in3, OUTPUT);
	pinMode(in4, OUTPUT);
	
	// Başlangıçta motorlar çalıştırılmıyor.
	digitalWrite(in1, LOW);
	digitalWrite(in2, LOW);
	digitalWrite(in3, LOW);
	digitalWrite(in4, LOW);
}

void loop() {
	directionControl();
}

// Motor yön fonksiyonu
void directionControl() {

	// 1 ve 2.inci motorlar döndürülüyor
	digitalWrite(in1, HIGH);
	digitalWrite(in2, LOW);
	digitalWrite(in3, HIGH);
	digitalWrite(in4, LOW);
	delay(2000);
	
	// Şimdi yönlerini değiştiriyoruz.
	digitalWrite(in1, LOW);
	digitalWrite(in2, HIGH);
	digitalWrite(in3, LOW);
	digitalWrite(in4, HIGH);
	delay(2000);
	
	// Motorları durdurduk.
	digitalWrite(in1, LOW);
	digitalWrite(in2, LOW);
	digitalWrite(in3, LOW);
	digitalWrite(in4, LOW);
	delay(1000);
}
