#include "Arduino.h"
#include "auslagern.h"

void aus(){  
  digitalWrite(LEDLinksUnten, LOW);
  digitalWrite(LEDLinksMitte, LOW);
  digitalWrite(LEDLinksOben, LOW);
  digitalWrite(LEDMitte, LOW);
  digitalWrite(LEDRechtsOben, LOW);
  digitalWrite(LEDRechtsMitte, LOW);
  digitalWrite(LEDRechtsUnten, LOW);
}
void out(){  
  digitalWrite(LEDLU, LOW);
  digitalWrite(LEDLM, LOW);
  digitalWrite(LEDLO, LOW);
  digitalWrite(LEDM, LOW);
  digitalWrite(LEDRO, LOW);
  digitalWrite(LEDRM, LOW);
  digitalWrite(LEDRU, LOW);
}
void eins(){
  digitalWrite(LEDLinksUnten, LOW);
  digitalWrite(LEDLinksMitte, LOW);
  digitalWrite(LEDLinksOben, LOW);
  digitalWrite(LEDMitte, HIGH);
  digitalWrite(LEDRechtsOben, LOW);
  digitalWrite(LEDRechtsMitte, LOW);
  digitalWrite(LEDRechtsUnten, LOW);
}
void zwei(){
  digitalWrite(LEDLinksUnten, LOW);
  digitalWrite(LEDLinksMitte, LOW);
  digitalWrite(LEDLinksOben, HIGH);
  digitalWrite(LEDMitte, LOW);
  digitalWrite(LEDRechtsOben, LOW);
  digitalWrite(LEDRechtsMitte, LOW);
  digitalWrite(LEDRechtsUnten, HIGH);
}
void drei(){
  digitalWrite(LEDLinksUnten, LOW);
  digitalWrite(LEDLinksMitte, LOW);
  digitalWrite(LEDLinksOben, HIGH);
  digitalWrite(LEDMitte, HIGH);
  digitalWrite(LEDRechtsOben, LOW);
  digitalWrite(LEDRechtsMitte, LOW);
  digitalWrite(LEDRechtsUnten, HIGH);
}
void vier(){
  digitalWrite(LEDLinksUnten, HIGH);
  digitalWrite(LEDLinksMitte, LOW);
  digitalWrite(LEDLinksOben, HIGH);
  digitalWrite(LEDMitte, LOW);
  digitalWrite(LEDRechtsOben, HIGH);
  digitalWrite(LEDRechtsMitte, LOW);
  digitalWrite(LEDRechtsUnten, HIGH);
}
void fuenf(){
  digitalWrite(LEDLinksUnten, HIGH);
  digitalWrite(LEDLinksMitte, LOW);
  digitalWrite(LEDLinksOben, HIGH);
  digitalWrite(LEDMitte, HIGH);
  digitalWrite(LEDRechtsOben, HIGH);
  digitalWrite(LEDRechtsMitte, LOW);
  digitalWrite(LEDRechtsUnten, HIGH);
}
void sechs(){
  digitalWrite(LEDLinksUnten, HIGH);
  digitalWrite(LEDLinksMitte, HIGH);
  digitalWrite(LEDLinksOben, HIGH);
  digitalWrite(LEDMitte, LOW);
  digitalWrite(LEDRechtsOben, HIGH);
  digitalWrite(LEDRechtsMitte, HIGH);
  digitalWrite(LEDRechtsUnten, HIGH);
}
void one(){
  digitalWrite(LEDLU, LOW);
  digitalWrite(LEDLM, LOW);
  digitalWrite(LEDLO, LOW);
  digitalWrite(LEDM, HIGH);
  digitalWrite(LEDRO, LOW);
  digitalWrite(LEDRM, LOW);
  digitalWrite(LEDRU, LOW);
}
void two(){
  digitalWrite(LEDLU, LOW);
  digitalWrite(LEDLM, LOW);
  digitalWrite(LEDLO, HIGH);
  digitalWrite(LEDM, LOW);
  digitalWrite(LEDRO, LOW);
  digitalWrite(LEDRM, LOW);
  digitalWrite(LEDRU, HIGH);
}
void three(){
  digitalWrite(LEDLU, LOW);
  digitalWrite(LEDLM, LOW);
  digitalWrite(LEDLO, HIGH);
  digitalWrite(LEDM, HIGH);
  digitalWrite(LEDRO, LOW);
  digitalWrite(LEDRM, LOW);
  digitalWrite(LEDRU, HIGH);
}
void four(){
  digitalWrite(LEDLU, HIGH);
  digitalWrite(LEDLM, LOW);
  digitalWrite(LEDLO, HIGH);
  digitalWrite(LEDM, LOW);
  digitalWrite(LEDRO, HIGH);
  digitalWrite(LEDRM, LOW);
  digitalWrite(LEDRU, HIGH);
}
void five(){
  digitalWrite(LEDLU, HIGH);
  digitalWrite(LEDLM, LOW);
  digitalWrite(LEDLO, HIGH);
  digitalWrite(LEDM, HIGH);
  digitalWrite(LEDRO, HIGH);
  digitalWrite(LEDRM, LOW);
  digitalWrite(LEDRU, HIGH);
}
void six(){
  digitalWrite(LEDLU, HIGH);
  digitalWrite(LEDLM, HIGH);
  digitalWrite(LEDLO, HIGH);
  digitalWrite(LEDM, LOW);
  digitalWrite(LEDRO, HIGH);
  digitalWrite(LEDRM, HIGH);
  digitalWrite(LEDRU, HIGH);
}
void Start(){
  digitalWrite(LEDLinksOben, HIGH);
  delay(100);
  digitalWrite(LEDLinksMitte, HIGH);
  delay(100);
  digitalWrite(LEDLinksUnten, HIGH);
  delay(100);
  digitalWrite(LEDLinksOben, LOW);
  digitalWrite(LEDLO, HIGH);
  delay(100);
  digitalWrite(LEDLinksMitte, LOW);
  digitalWrite(LEDLM, HIGH);
  delay(100);
  digitalWrite(LEDLinksUnten, LOW);
  digitalWrite(LEDLU, HIGH);
  delay(100);
  digitalWrite(LEDLO, LOW);
  digitalWrite(LEDM, HIGH);
  delay(100);
  digitalWrite(LEDLM, LOW);
  digitalWrite(LEDMitte, HIGH);
  delay(100);
  digitalWrite(LEDLU, LOW);
  digitalWrite(LEDRechtsOben, HIGH);
  delay(100);
  digitalWrite(LEDM, LOW);
  digitalWrite(LEDRechtsMitte, HIGH);
  delay(100);
  digitalWrite(LEDMitte, LOW);
  digitalWrite(LEDRechtsUnten, HIGH);
  delay(100);
  digitalWrite(LEDRechtsOben, LOW);
  digitalWrite(LEDRO, HIGH);
  delay(100);
  digitalWrite(LEDRechtsMitte, LOW);
  digitalWrite(LEDRM, HIGH);
  delay(100);
  digitalWrite(LEDRechtsUnten, LOW);
  digitalWrite(LEDRU, HIGH);
  delay(100);
  digitalWrite(LEDRO, LOW);
  delay(100);
  digitalWrite(LEDRM, LOW);
  delay(100);
  digitalWrite(LEDRU, LOW);
  delay(2000);
}
void Ruhemodus(){ 
  aus();
  out();
  delay(150);
  digitalWrite(LEDLinksOben, HIGH);
  digitalWrite(LEDLinksMitte, HIGH);
  digitalWrite(LEDLinksUnten, HIGH);
  digitalWrite(LEDLO, HIGH);
  digitalWrite(LEDLM, HIGH);
  digitalWrite(LEDLU, HIGH);
  digitalWrite(LEDM, HIGH);
  digitalWrite(LEDMitte, HIGH);
  digitalWrite(LEDRechtsOben, HIGH);
  digitalWrite(LEDRechtsMitte, HIGH);
  digitalWrite(LEDRechtsUnten, HIGH);
  digitalWrite(LEDRO, HIGH);
  digitalWrite(LEDRM, HIGH);
  digitalWrite(LEDRU, HIGH);
  delay(150);  
}
void ZahlEinsLeuchtet(){
    aus();
    out();
    int Zufallszahl = random(1,7);
    delay(100);
    if (Zufallszahl == 1){
      eins();
    }
    if (Zufallszahl == 2){
      zwei();
    }
    if (Zufallszahl == 3){
      drei();
    }
    if (Zufallszahl == 4){
      vier();
    }
    if (Zufallszahl == 5){
      fuenf();
    }
    if (Zufallszahl == 6){
      sechs();
    }
    delay(4000);
    aus();
}
void ZahlZweiLeuchtet(){
    aus();
    out();
    int Zufallszahl = random(2,13);
    delay(100);
    if (Zufallszahl == 2){
      one();
      eins();
    }
    if (Zufallszahl == 3){
      two();
      eins();
    }
    if (Zufallszahl == 4){
      drei();
      one();
    }
    if (Zufallszahl == 5){
      two();
      drei();
    }
    if (Zufallszahl == 6){
      two();
      vier();
    }
    if (Zufallszahl == 7){
      four();
      drei();
    }
    if (Zufallszahl == 8){
      three();
      fuenf();
    }
    if (Zufallszahl == 9){
      five();
      vier();
    }
    if (Zufallszahl == 10){
      six();
      vier();
    }
    if (Zufallszahl == 11){
      five();
      sechs();
    }
    if (Zufallszahl == 12){
      six();
      sechs();
    }    
    delay(4000);
    out();
    aus();
}
void WuerfelEinsWuerfelt(){
  aus();
  out();
  digitalWrite(LEDLinksOben, HIGH);
  delay(100);
  digitalWrite(LEDLinksOben, LOW);
  digitalWrite(LEDLinksMitte, HIGH);
  delay(100);
  digitalWrite(LEDLinksMitte, LOW);
  digitalWrite(LEDLinksUnten, HIGH);
  delay(100);
  digitalWrite(LEDLinksUnten, LOW);
  digitalWrite(LEDMitte, HIGH);
  delay(100);
  digitalWrite(LEDMitte, LOW);
  digitalWrite(LEDRechtsOben, HIGH);
  delay(100);
  digitalWrite(LEDRechtsOben, LOW);
  digitalWrite(LEDRechtsMitte, HIGH);
  delay(100);
  digitalWrite(LEDRechtsMitte, LOW);
  digitalWrite(LEDRechtsUnten, HIGH);
  delay(100);
  digitalWrite(LEDRechtsUnten, LOW);
  delay(100);
  digitalWrite(LEDLinksOben, HIGH);
  delay(100);
  digitalWrite(LEDLinksOben, LOW);
  digitalWrite(LEDLinksMitte, HIGH);
  delay(100);
  digitalWrite(LEDLinksMitte, LOW);
  digitalWrite(LEDLinksUnten, HIGH);
  delay(100);
  digitalWrite(LEDLinksUnten, LOW);
  digitalWrite(LEDMitte, HIGH);
  delay(100);
  digitalWrite(LEDMitte, LOW);
  digitalWrite(LEDRechtsOben, HIGH);
  delay(100);
  digitalWrite(LEDRechtsOben, LOW);
  digitalWrite(LEDRechtsMitte, HIGH);
  delay(100);
  digitalWrite(LEDRechtsMitte, LOW);
  digitalWrite(LEDRechtsUnten, HIGH);
  delay(100);
  digitalWrite(LEDRechtsUnten, LOW);
  delay(100);
}
void BeideWuerfeln(){
  aus();
  out();
  digitalWrite(LEDLinksOben, HIGH);
  digitalWrite(LEDLO, HIGH);
  delay(100);
  digitalWrite(LEDLinksOben, LOW);
  digitalWrite(LEDLinksMitte, HIGH);
  digitalWrite(LEDLO, LOW);
  digitalWrite(LEDLM, HIGH);
  delay(100);
  digitalWrite(LEDLinksMitte, LOW);
  digitalWrite(LEDLinksUnten, HIGH);
  digitalWrite(LEDLM, LOW);
  digitalWrite(LEDLU, HIGH);
  delay(100);
  digitalWrite(LEDLinksUnten, LOW);
  digitalWrite(LEDMitte, HIGH);
  digitalWrite(LEDLU, LOW);
  digitalWrite(LEDM, HIGH);
  delay(100);
  digitalWrite(LEDMitte, LOW);
  digitalWrite(LEDRechtsOben, HIGH);
  digitalWrite(LEDM, LOW);
  digitalWrite(LEDRO, HIGH);
  delay(100);
  digitalWrite(LEDRechtsOben, LOW);
  digitalWrite(LEDRechtsMitte, HIGH);
  digitalWrite(LEDRO, LOW);
  digitalWrite(LEDRM, HIGH);
  delay(100);
  digitalWrite(LEDRechtsMitte, LOW);
  digitalWrite(LEDRechtsUnten, HIGH);
  digitalWrite(LEDRM, LOW);
  digitalWrite(LEDRU, HIGH);
  delay(100);
  digitalWrite(LEDRechtsUnten, LOW);
  digitalWrite(LEDRU, LOW);
  delay(100);
  digitalWrite(LEDLinksOben, HIGH);
  digitalWrite(LEDLO, HIGH);
  delay(100);
  digitalWrite(LEDLinksOben, LOW);
  digitalWrite(LEDLinksMitte, HIGH);
  digitalWrite(LEDLO, LOW);
  digitalWrite(LEDLM, HIGH);
  delay(100);
  digitalWrite(LEDLinksMitte, LOW);
  digitalWrite(LEDLinksUnten, HIGH);
  digitalWrite(LEDLM, LOW);
  digitalWrite(LEDLU, HIGH);
  delay(100);
  digitalWrite(LEDLinksUnten, LOW);
  digitalWrite(LEDMitte, HIGH);
  digitalWrite(LEDLU, LOW);
  digitalWrite(LEDM, HIGH);
  delay(100);
  digitalWrite(LEDMitte, LOW);
  digitalWrite(LEDRechtsOben, HIGH);
  digitalWrite(LEDM, LOW);
  digitalWrite(LEDRO, HIGH);
  delay(100);
  digitalWrite(LEDRechtsOben, LOW);
  digitalWrite(LEDRechtsMitte, HIGH);
  digitalWrite(LEDRO, LOW);
  digitalWrite(LEDRM, HIGH);
  delay(100);
  digitalWrite(LEDRechtsMitte, LOW);
  digitalWrite(LEDRechtsUnten, HIGH);
  digitalWrite(LEDRM, LOW);
  digitalWrite(LEDRU, HIGH);
  delay(100);
  digitalWrite(LEDRechtsUnten, LOW);
  digitalWrite(LEDRU, LOW);
  delay(100);    
}



