void setup() {

}

void loop() {

  dacWrite(26, 300);
  delay(1000);


  dacWrite(26, 250);
  delay(1000);

  dacWrite(26, 200);
  delay(1000);

  dacWrite(26, 150);
  delay(1000);


  dacWrite(26, 100);
  delay(1000);
  dacWrite(26, 255);
  delay(1000);
  dacWrite(26, 50);
  delay(1000);

  dacWrite(26, 0);
  delay(5000);

  //dacWrite(26, 80);
}
