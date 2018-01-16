#ifndef AUSLAGERN_H
#define AUSLAGERN_H

//Buttons
const int buttonEins = 2;
const int buttonZwei = 3;

//Würfel Eins
const int LEDLinksUnten = 22;
const int LEDLinksMitte = 23;
const int LEDLinksOben = 24;
const int LEDMitte = 25;
const int LEDRechtsOben = 28;
const int LEDRechtsMitte = 29;
const int LEDRechtsUnten = 30;

//Würfel Zwei
const int LEDRO = 34;
const int LEDRM = 35;
const int LEDRU = 36;
const int LEDM = 37;
const int LEDLO = 40;
const int LEDLM = 41;
const int LEDLU = 42;


void aus();
void out();

void eins();
void zwei();
void drei();
void vier();
void fuenf();
void sechs();

void one();
void two();
void three();
void four();
void five();
void six();

void Start();
void Ruhemodus();

void ZahlEinsLeuchtet();
void ZahlZweiLeuchtet();

void WuerfelEinsWuerfelt();
void BeideWuerfeln();


#endif
