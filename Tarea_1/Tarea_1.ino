// entradas

// pines
int pul_1_pin = 2;
int pul_2_pin = 2;

int pot_1_pin = 3;

// estados
int pul_1_estado = 0;
int pul_2_estado = 0;

int pot_1_valor = 0;


// Salidas

int led_pin_R = 12;
int led_pin_G = 13;
int led_pin_B = 17;

void setup() {

  //entradas

  pinMode (pul_1_pin, INPUT);
  pinMode (pul_1_pin, INPUT);

  // Salidas
  pinMode ( led_pin_R, OUTPUT);
  pinMode ( led_pin_G, OUTPUT);
  pinMode ( led_pin_B, OUTPUT);


  digitalWrite(led_pin_R, HIGH);
  digitalWrite(led_pin_G, HIGH);
  digitalWrite(led_pin_B, HIGH);
  delay (1000);

}

void loop() {



  digitalWrite(led_pin_R, LOW);
  delay(500);
  digitalWrite(led_pin_R, HIGH);
  delay(500);

  digitalWrite(led_pin_G, LOW);
  delay(500);
  digitalWrite(led_pin_G, HIGH);
  delay(500);


  digitalWrite(led_pin_B, LOW);
  delay(500);
  digitalWrite(led_pin_B, HIGH);
  delay(500);








}
