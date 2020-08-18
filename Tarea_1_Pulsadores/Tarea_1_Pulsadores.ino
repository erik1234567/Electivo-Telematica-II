// entradas

// pines
int pul_1_pin = 22; // pines a utilizar para el pulsador 1 
int pul_2_pin = 23;  // pines a utilizar para el pulsador 2


// estados
int pul_1_estado = 0; // variable que almacena el valor del pulsador que puede ser  0 o 1 
int pul_2_estado = 0; // variable que almacena el valor del pulsador que puede ser  0 o 1 



void setup() {

  //entradas

  pinMode (pul_1_pin, INPUT_PULLUP); // se configuran los pines de los pulsadores como entradas,ademas se habilita un resistencia PULL-UP interna 
  pinMode (pul_2_pin, INPUT_PULLUP);  // se configuran los pines de los pulsadores como entradas,ademas se habilita un resistencia PULL-UP interna 

 

  Serial.begin(9600); // se establece la comunicacion serial entre el esp32 y el pc 

}

void loop() {

  pul_1_estado = digitalRead(pul_1_pin); // lectura de pulsador 1 

  pul_2_estado = digitalRead(pul_2_pin); // lectura de pulsador 2


  Serial.print("Estado del pulsador 1 = "); // se imprime un mensaje que acompaña al estado del pulsador 
  Serial.print(pul_1_estado);                  // se imprime el valor del pulsador 



  Serial.print("        Estado del pulsador 2 = ");

  Serial.println(pul_2_estado);


}
