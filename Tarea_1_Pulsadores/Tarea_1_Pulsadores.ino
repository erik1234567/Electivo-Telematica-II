// entradas

// pines
int pul_1_pin = 22;
int pul_2_pin = 23;

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

  pinMode (pul_1_pin, INPUT_PULLUP);
  pinMode (pul_2_pin, INPUT_PULLUP);

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



  pul_1_estado = digitalRead(pul_1_pin);


  pul_2_estado = digitalRead(pul_2_pin);


  Serial.print("Estado del pulsador 1 = ");

  Serial.print(pul_1_estado);



  Serial.print("        Estado del pulsador 1 = ");

  Serial.println(pul_2_estado);








}
