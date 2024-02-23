// Define pin numbers for LEDs and buttons
#define led1 A15
#define led2 A14
#define led3 A13
#define led4 A12
#define led5 A11
#define led6 A10
#define led7 A9
#define led8 A8
#define led9 A7
#define led10 A6
#define bouton11 2
#define bouton12 3
#define bouton21 4
#define bouton22 7
#define bouton23 6
#define bouton31 5
#define bouton32 8
#define bouton33 9
#define bouton41 10
#define bouton42 14
#define bouton51 11
#define bouton52 12
#define bouton53 15
#define bouton54 16
#define bouton61 13
#define bouton62 17
#define bouton71 18
#define bouton72 19
#define bouton73 22
#define bouton74 23
#define bouton81 20
#define bouton82 21
#define bouton83 24
#define bouton84 25
#define bouton91 26
#define bouton92 30
#define bouton101 27
#define bouton102 28
#define bouton103 31
#define bouton104 32
#define bouton111 29
#define bouton112 33
#define bouton121 34
#define bouton122 35
#define bouton123 38
#define bouton131 36
#define bouton132 37
#define bouton133 39
#define bouton141 40
#define bouton142 41
#define bouton13 53
#define bouton43 51
#define bouton63 52


// Define character arrays for button states and received LED states
char bouton[15] = {'00000000000000'}; // Initialized to all zeros
char ledrecu[11] = {'1111111111'};    // Initialized to all ones (assuming this is the default state)
char bufferrecu[10];                   // Buffer for received LED states
char endline = 5;                      // Endline character for serial communication
int i = 0;                             // Loop variable
int r = 1;                             // Unused variable


void setup() {
    // Set LED pins as outputs and button pins as inputs with pull-up resistors
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);
pinMode(led5, OUTPUT);
pinMode(led6, OUTPUT);
pinMode(led7, OUTPUT);
pinMode(led8, OUTPUT);
pinMode(led9, OUTPUT);
pinMode(led10, OUTPUT);
pinMode(bouton11,INPUT_PULLUP);
pinMode(bouton12,INPUT_PULLUP);
pinMode(bouton21,INPUT_PULLUP);
pinMode(bouton22,INPUT_PULLUP);
pinMode(bouton23,INPUT_PULLUP);
pinMode(bouton31,INPUT_PULLUP);
pinMode(bouton32,INPUT_PULLUP);
pinMode(bouton33,INPUT_PULLUP);
pinMode(bouton41,INPUT_PULLUP);
pinMode(bouton42,INPUT_PULLUP);
pinMode(bouton51,INPUT_PULLUP);
pinMode(bouton52,INPUT_PULLUP);
pinMode(bouton53,INPUT_PULLUP);
pinMode(bouton54,INPUT_PULLUP);
pinMode(bouton61,INPUT_PULLUP);
pinMode(bouton62,INPUT_PULLUP);
pinMode(bouton71,INPUT_PULLUP);
pinMode(bouton72,INPUT_PULLUP);
pinMode(bouton73,INPUT_PULLUP);
pinMode(bouton74,INPUT_PULLUP);
pinMode(bouton81,INPUT_PULLUP);
pinMode(bouton82,INPUT_PULLUP);
pinMode(bouton83,INPUT_PULLUP);
pinMode(bouton84,INPUT_PULLUP);
pinMode(bouton91,INPUT_PULLUP);
pinMode(bouton92,INPUT_PULLUP);
pinMode(bouton101,INPUT_PULLUP);
pinMode(bouton102,INPUT_PULLUP);
pinMode(bouton103,INPUT_PULLUP);
pinMode(bouton104,INPUT_PULLUP);
pinMode(bouton111,INPUT_PULLUP);
pinMode(bouton112,INPUT_PULLUP);
pinMode(bouton121,INPUT_PULLUP);
pinMode(bouton122,INPUT_PULLUP);
pinMode(bouton123,INPUT_PULLUP);
pinMode(bouton131,INPUT_PULLUP);
pinMode(bouton132,INPUT_PULLUP);
pinMode(bouton133,INPUT_PULLUP);
pinMode(bouton141,INPUT_PULLUP);
pinMode(bouton142,INPUT_PULLUP);
pinMode(bouton13,INPUT_PULLUP);
pinMode(bouton43,INPUT_PULLUP);
pinMode(bouton63,INPUT_PULLUP);
Serial.begin(19200);
Serial.setTimeout(500);
}

void loop() {
 // Read buttons states and update bouton array accordingly
if (digitalRead(bouton11)==false ){
bouton[0]={'2'};  
}
else if (digitalRead(bouton12)==false ){
bouton[0]={'1'};  
}
else if (digitalRead(bouton13)==false ){
  bouton[0]={'5'};
}
else {
 bouton[0]={'0'};  
}

if (digitalRead(bouton21)==false ){
bouton[1]={'4'};  
}
else if (digitalRead(bouton22)==false ){
bouton[1]={'1'};  
}
else if (digitalRead(bouton23)==false ){
 bouton[1]={'2'}; 
}
else {
 bouton[1]={'0'};  
}

if (digitalRead(bouton31)==false ){
bouton[2]={'3'};  
}
else if (digitalRead(bouton32)==false ){
bouton[2]={'2'};  
}
else if (digitalRead(bouton33)==false ){
 bouton[2]={'1'}; 
}
else {
 bouton[2]={'0'};  
}
if (digitalRead(bouton41)==false ){
bouton[3]={'4'};  
}
else if (digitalRead(bouton42)==false ){
bouton[3]={'1'};  
}
else if (digitalRead(bouton43)==false ){
  bouton[3]={'5'};
}
else {
 bouton[3]={'0'};  
}

if (digitalRead(bouton51)==false ){
bouton[4]={'3'};  
}
else if (digitalRead(bouton52)==false ){
bouton[4]={'4'};  
}
else if (digitalRead(bouton53)==false ){
bouton[4]={'2'};  
}
else if (digitalRead(bouton54)==false ){
 bouton[4]={'1'}; 
}
else {
 bouton[4]={'0'};  
}

if (digitalRead(bouton61)==false ){
bouton[5]={'3'};  
}
else if (digitalRead(bouton62)==false ){
bouton[5]={'2'};  
}
else if (digitalRead(bouton63)==false ){
  bouton[5]={'5'};
}
else {
 bouton[5]={'0'};  
}

if (digitalRead(bouton71)==false ){
bouton[6]={'3'};  
}
else if (digitalRead(bouton72)==false ){
bouton[6]={'4'};  
}
else if (digitalRead(bouton73)==false ){
bouton[6]={'2'};  
}
else if (digitalRead(bouton74)==false ){
 bouton[6]={'1'}; 
}
else {
 bouton[6]={'0'};  
}

if (digitalRead(bouton81)==false ){
bouton[7]={'3'};  
}
else if (digitalRead(bouton82)==false ){
bouton[7]={'4'};  
}
else if (digitalRead(bouton83)==false ){
bouton[7]={'2'};  
}
else if (digitalRead(bouton84)==false ){
 bouton[7]={'1'}; 
}
else {
 bouton[7]={'0'};  
}

if (digitalRead(bouton91)==false ){
bouton[8]={'4'};  
}
else if (digitalRead(bouton92)==false ){
bouton[8]={'1'};  
}
else {
 bouton[8]={'0'};  
}

if (digitalRead(bouton101)==false ){
bouton[9]={'3'};  
}
else if (digitalRead(bouton102)==false ){
bouton[9]={'4'};  
}
else if (digitalRead(bouton103)==false ){
bouton[9]={'2'};  
}
else if (digitalRead(bouton104)==false ){
 bouton[9]={'1'}; 
}
else {
 bouton[9]={'0'};  
}

if (digitalRead(bouton111)==false ){
bouton[10]={'3'};  
}
else if (digitalRead(bouton112)==false ){
bouton[10]={'2'};  
}
else {
 bouton[10]={'0'};  
}

if (digitalRead(bouton121)==false ){
bouton[11]={'3'};  
}
else if (digitalRead(bouton122)==false ){
bouton[11]={'4'};  
}
else if (digitalRead(bouton123)==false ){
 bouton[11]={'1'}; 
}
else {
 bouton[11]={'0'};  
}

if (digitalRead(bouton131)==false ){
bouton[12]={'3'};  
}
else if (digitalRead(bouton132)==false ){
bouton[12]={'4'};  
}
else if (digitalRead(bouton133)==false ){
 bouton[12]={'2'}; 
}
else {
 bouton[12]={'0'};  
}

if (digitalRead(bouton141)==false ){
bouton[13]={'3'};  
}
else if (digitalRead(bouton142)==false ){
bouton[13]={'4'};  
}
else {
 bouton[13]={'0'};  
}

  // Set LEDs based on received LED states
for (i=0;i<10;i++){
  if (ledrecu[i]=='1'){

  digitalWrite(led[i],HIGH);
}
else{
 
  digitalWrite(led[i],LOW);
}
}
// Delay for stability
delay(100);




  // Send bouton state via serial
Serial.println(bouton);



delay(10);

  // Receive LED states from serial
while(Serial.available()){ //From RPi to Arduino
  if (Serial.read()=='z'){
    
  
  Serial.readBytesUntil('a',bufferrecu,10);
  //Serial.print(bufferrecu);
  
  for ( i =0;i<10;i++){
    
    ledrecu[i] =  bufferrecu[i];
  
  }
}
}
}
