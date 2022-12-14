/* PHOTONTECH */
/*
  Motor Sürücü Test Uygulaması
  
  Motorlar ileri ve geri yönde hareket edecekler. Ardından durup hızları yükselip düşecek.
   
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
	delay(1000);
	speedControl();
	delay(1000);
}

// Motor yön fonksiyonu
void directionControl() {
	// Motorlar maksimum hızda döndürülecek
	// Bunun için PWM değeri 255 olarak ayarlanıyor.
	analogWrite(enA, 255);
	analogWrite(enB, 255);

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
}

// Bu fonksiyon ile motorların hızlarını kontrol ediyoruz.
void speedControl() {
	// Motorları çalıştırdık.
	digitalWrite(in1, LOW);
	digitalWrite(in2, HIGH);
	digitalWrite(in3, LOW);
	digitalWrite(in4, HIGH);
	
	// Hızlarını minimumdan maksimuma doğru çıkardık.
	for (int i = 0; i < 256; i++) {
		analogWrite(enA, i);
		analogWrite(enB, i);
		delay(20);
	}
	
	// Şimdi hızlarını maksimumdan minimuma düşürdük.
	for (int i = 255; i >= 0; --i) {
		analogWrite(enA, i);
		analogWrite(enB, i);
		delay(20);
	}
	
	// Motorları durdurduk.
	digitalWrite(in1, LOW);
	digitalWrite(in2, LOW);
	digitalWrite(in3, LOW);
	digitalWrite(in4, LOW);
}