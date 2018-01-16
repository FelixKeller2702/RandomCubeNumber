#include "auslagern.h"

void setup() {  
  pinMode(LEDLinksUnten, OUTPUT);
  pinMode(LEDLinksMitte, OUTPUT);
  pinMode(LEDLinksOben, OUTPUT);
  pinMode(LEDMitte, OUTPUT);
  pinMode(LEDRechtsOben, OUTPUT);
  pinMode(LEDRechtsMitte, OUTPUT);
  pinMode(LEDRechtsUnten, OUTPUT);
  
  pinMode(LEDLU, OUTPUT);
  pinMode(LEDLM, OUTPUT);
  pinMode(LEDLO, OUTPUT);
  pinMode(LEDM, OUTPUT);
  pinMode(LEDRO, OUTPUT);
  pinMode(LEDRM, OUTPUT);
  pinMode(LEDRU, OUTPUT);
  
  pinMode(buttonEins, INPUT);
  pinMode(buttonZwei, INPUT);  

  randomSeed(analogRead(0));

  Start();
}

void loop() {
    while(digitalRead(buttonEins) == HIGH && digitalRead(buttonZwei) == HIGH){
      Ruhemodus();
    }
    if (digitalRead(buttonEins) == LOW){
      WuerfelEinsWuerfelt();   
      ZahlEinsLeuchtet();
    }  
    if(digitalRead(buttonZwei) == LOW){
      BeideWuerfeln();
      ZahlZweiLeuchtet();
    }
  
}
