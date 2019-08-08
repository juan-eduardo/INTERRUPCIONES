int x;
int y;
void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  attachInterrupt(digitalPinToInterrupt(25),contador,LOW );
}
void contador() {
  y++;
    digitalWrite(2,HIGH);

}
void loop() {
  // put your main code here, to run repeatedly:
  x++;
  digitalWrite(2,LOW);
  Serial.print("\n");
  Serial.print(x);
  Serial.print("\n");
  Serial.print(y);
  delay(500);
  }
