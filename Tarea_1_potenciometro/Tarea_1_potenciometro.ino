
int pot_1_pin = 36; // se define el a utilizar en la esp32 es que un ADC 
int pot_1_valor = 2;// variable donde se guardara el valor del entregado por el ADC 
void setup() {
  
  Serial.begin(115200); // hbilitación de comunicación Serial 
  analogReadResolution(10); // configuracion de la resolucion del ADC puede 12 o 11 o 10 
}

void loop() {
  /
  pot_1_valor = analogRead(pot_1_pin); // lectura de una entrada analogica 
  
  Serial.print("Valor entregado por el potenciometro :" );// mensaje que acompaña al valor entregado por el ADC
  Serial.println(pot_1_valor); // se imprime el valor entregado por el ADC 

}
