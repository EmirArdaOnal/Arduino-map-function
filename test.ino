int sensorValue = 512;  // Sensörden alınan değer
int oldMin = 0;        // Eski aralığın minimum değeri
int oldMax = 1023;     // Eski aralığın maksimum değeri
int newMin = 0;        // Yeni aralığın minimum değeri
int newMax = 255;      // Yeni aralığın maksimum değeri

int mappedValue = ((sensorValue - oldMin) * (newMax - newMin)) / (oldMax - oldMin) + newMin; //.map Function but but but math 

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(mappedValue);  // Dönüştürülen değeri seri port üzerinden göster
  delay(1000);
}
