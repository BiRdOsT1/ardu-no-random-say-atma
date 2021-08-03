long rndnum;


void setup() {
Serial.begin(9600); // Porta veri Gönderiyoruz
}

void loop() {
rndnum = random(300); //0-300 arasındaki rastgele sayıları seçer


Serial.println(rndnum); // 0-300 arasındaki random sayıları porta yazdırır

  delay(50); //her 50 ms de bir sayıyı degiştirir
}
