#define trigPin1 39
#define echoPin1 41
#define sharp1 A1

long distance1()
{
 long duration, distance_below;
  digitalWrite(trigPin1, LOW);  
  delayMicroseconds(2); 
  digitalWrite(trigPin1, HIGH);

  delayMicroseconds(10); 
  digitalWrite(trigPin1, LOW);
  duration = pulseIn(echoPin1, HIGH);
  distance_below = ((duration/2) *10) / 291;
  return distance_below;
  
}
void setup()
{Serial.begin(9600);
  pinMode(trigPin1, OUTPUT);
  pinMode(echoPin1, INPUT);

}
void loop()
{int distance_1;
long distance;
  distance=distance1();
  Serial.println(distance);
 //distance_1  = analogRead(A0);
  Serial.println("distance"); 
 // Serial.println(distance_1);  
  delay(500);

}
