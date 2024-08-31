int D=A1;
long int l;
void setup() {
  Serial.begin(9600);
  pinMode(D,INPUT);
}

void loop() {
  
 l=analogRead(D);
 Serial.println(l);
 delay(100);


}
