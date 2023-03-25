#include <Arduino.h>

void setup() {
 
  int numero=10;
}

void loop() {
  char intitucion[]={'U','C','E','V','A','\n'};
  for(int i=0; i<6;i++)
    //Serial.print(intitucion[i]);
    Serial.print(*(intitucion + i));
   // Serial.print(*(intitucion + i*sizeof(char)));
    Serial.flush();
    
   // Serial.print("en loop(): numero =");
   // Serial.print(numero);
   // duplicar(&numero);

    exit(0);
}

void duplicar(int *punteroNumero){
  *punteroNumero=*punteroNumero*2;
  Serial.print("En duplicar(): punteroNumero =");
  Serial.print(*punteroNumero);
}