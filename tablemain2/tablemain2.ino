
#include <FastLED.h>
#define LED_PIN     3
#define NUM_LEDS    50
CRGB leds[NUM_LEDS];
char serIn = 0;
boolean etat[15] ={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int i=255;
int y=0;
void setup() {
Serial.begin(9600);
char rouge = 0;
char bleu = 255;
char vert = 0;
  pinMode(2, INPUT_PULLUP); 
  randomSeed(analogRead(0));
//digital input pin 1-15

FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
}

void loop() {
//for (int y=0;y==14;y++){

for ( i=0; i<51;i++){
   if (i>0){
    leds[i-1] = CRGB( 0, 0, 0); // Set the reactive LED to bluee
   }
    leds[i] = CRGB( 100, 0, 0); // Set the reactive LED to bluee
        delay(50);
        FastLED.show(); // Update the LEDs
        Serial.println(i); 

}

// i=int(random(0,765));
//y = int(random(0,15));
//if (i<255){
//    leds[y] = CRGB( 0, 0, 255); // Set the reactive LED to bluee
//}
//if (i<510 and i>255){
//    leds[y] = CRGB( 0, 255,0 ); // Set the reactive LED to bluee
//}
//if (i>510){
//    leds[y] = CRGB( 255, 0, 0); // Set the reactive LED to bluee
//}
//      FastLED.show(); // Update the LEDs
//    delay(20);
////}

  
}     

