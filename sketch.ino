const int ledpins[] = {2,4};
const int ledpins2[] = {0,15,16};
const int pinoled17 = 17;
const int pinoled2 = 2;
const int pinoled4 = 4;
const int numleds = sizeof(ledpins) / sizeof(ledpins[0]);
const int numleds2 = sizeof(ledpins2) / sizeof(ledpins2[0]);


void setup() {
  for(int i = 0; i < numleds; i++){
    pinMode(ledpins[i], OUTPUT);
  }
    for(int i = 0; i < numleds2; i++){
    pinMode(ledpins2[i], OUTPUT);
  }
  pinMode(pinoled17, OUTPUT);


  for(int i = 0; i < numleds; i++){
    digitalWrite(ledpins[i], HIGH);
    delay(1500);
  }
  
 for(int i = 0; i < numleds2; i++){
    digitalWrite(ledpins2[i], HIGH);
    delay(120);
    digitalWrite(ledpins2[i], LOW);
    delay(120);
 }
  digitalWrite(pinoled17, HIGH);
  delay(2000);
  digitalWrite(pinoled2, LOW);
  digitalWrite(pinoled4, LOW);
  
}

void loop() {


}