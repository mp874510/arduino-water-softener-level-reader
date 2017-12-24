  const int trigPin = 9;
  const int echoPin = 10;
  long duration;
  int distanceCm, distanceInch;
  
  void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin,INPUT);
  Serial.print("test\n");
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  Serial.print("\n");
  Serial.print("duraction: "+(String)duration);
  distanceCm= duration*0.034/2;
  Serial.print("distance cm: " + (String)distanceCm);
  distanceInch = duration*0.0133/2;
  Serial.print("distance in: " + (String)distanceInch);
}
