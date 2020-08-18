

// Salidas

int led_pin_R = 12;
int led_pin_G = 13;
int led_pin_B = 17;

void setup() {

  // Salidas
  pinMode ( led_pin_R, OUTPUT);
  pinMode ( led_pin_G, OUTPUT);
  pinMode ( led_pin_B, OUTPUT);

  // apaga todos los LED
  digitalWrite(led_pin_R, HIGH);
  digitalWrite(led_pin_G, HIGH);
  digitalWrite(led_pin_B, HIGH);
  delay (1000);

  // configuracion de la comunicacion serial

  Serial.begin(115200);

}

void loop() {
  

  digitalWrite(led_pin_R, HIGH);
  digitalWrite(led_pin_G, HIGH);
  digitalWrite(led_pin_B, HIGH);
  delay (1000);


// se encienden todos los led blanco 
  digitalWrite(led_pin_R, LOW);
  digitalWrite(led_pin_G, LOW);
  digitalWrite(led_pin_B, LOW);
  delay (1000);








}
