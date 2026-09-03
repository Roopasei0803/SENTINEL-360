// SENTINEL 360
// 3 Direction Obstacle Detection
// Alert Range: 50 cm

const int FRONT_TRIG = 2;
const int FRONT_ECHO = 3;

const int LEFT_TRIG = 4;
const int LEFT_ECHO = 5;

const int RIGHT_TRIG = 6;
const int RIGHT_ECHO = 7;

const int BUZZER = 11;

// Alert distance in cm
const int ALERT_DISTANCE = 80;


// Function to measure distance
long getDistance(int trigPin, int echoPin)
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH, 30000);

  long distance = duration * 0.034 / 2;

  return distance;
}


void setup()
{
  // Front sensor
  pinMode(FRONT_TRIG, OUTPUT);
  pinMode(FRONT_ECHO, INPUT);

  // Left sensor
  pinMode(LEFT_TRIG, OUTPUT);
  pinMode(LEFT_ECHO, INPUT);

  // Right sensor
  pinMode(RIGHT_TRIG, OUTPUT);
  pinMode(RIGHT_ECHO, INPUT);

  // Buzzer
  pinMode(BUZZER, OUTPUT);

  Serial.begin(9600);
}


void loop()
{
  // Read Front sensor
  long frontDistance = getDistance(FRONT_TRIG, FRONT_ECHO);
  delay(60);

  // Read Left sensor
  long leftDistance = getDistance(LEFT_TRIG, LEFT_ECHO);
  delay(60);

  // Read Right sensor
  long rightDistance = getDistance(RIGHT_TRIG, RIGHT_ECHO);


  // Display distances
  Serial.print("Front: ");
  Serial.print(frontDistance);
  Serial.print(" cm | ");

  Serial.print("Left: ");
  Serial.print(leftDistance);
  Serial.print(" cm | ");

  Serial.print("Right: ");
  Serial.print(rightDistance);
  Serial.println(" cm");


  // Alert when any obstacle is within 50 cm
  if ((frontDistance > 0 && frontDistance <= ALERT_DISTANCE) ||
      (leftDistance > 0 && leftDistance <= ALERT_DISTANCE) ||
      (rightDistance > 0 && rightDistance <= ALERT_DISTANCE))
  {
    tone(BUZZER, 1000);
  }
  else
  {
    noTone(BUZZER);
  }

  delay(100);
}
