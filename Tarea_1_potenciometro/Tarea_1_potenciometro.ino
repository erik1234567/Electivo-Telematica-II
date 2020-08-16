int pot_1_pin = 36;
int pot_1_valor = 2;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  analogReadResolution(12);
}

void loop() {
  // put your main code here, to run repeatedly:
  pot_1_valor = analogRead(pot_1_pin);
  Serial.print("Valor entregado por el potenciometro :" );
  Serial.println(pot_1_valor);
  
}
