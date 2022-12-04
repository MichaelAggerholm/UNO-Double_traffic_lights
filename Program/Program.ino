int red1 = 10;
int yellow1 = 9;
int green1 = 8;

int red2 = 13;
int yellow2 = 12;
int green2 =11;

void setup(){
  pinMode(red1, OUTPUT);
  pinMode(yellow1, OUTPUT);
  pinMode(green1, OUTPUT);

  pinMode(red2, OUTPUT);
  pinMode(yellow2, OUTPUT);
  pinMode(green2, OUTPUT);
}

void loop(){
  changeLights();
  delay(15000);
}

void changeLights() {
  // green off, yellow on for 3 seconds
  digitalWrite(green1, LOW);
  digitalWrite(yellow1, HIGH);
  digitalWrite(green2, LOW);
  digitalWrite(yellow2, HIGH);
  delay(3000);

  // Turn off yellow, then red on for 5 seconds
  digitalWrite(yellow1, LOW);
  digitalWrite(red1, HIGH);
  digitalWrite(yellow2, LOW);
  digitalWrite(red2, HIGH);
  delay(5000);

  // Red and yellow on for 2 seconds (red is already on though)
  digitalWrite(yellow1, HIGH);
  digitalWrite(yellow2, HIGH);
  delay(2000);

  // Turn off red and yellow, then turn on green
  digitalWrite(yellow1, LOW);
  digitalWrite(red1, LOW);
  digitalWrite(green1, HIGH);
  digitalWrite(yellow2, LOW);
  digitalWrite(red2, LOW);
  digitalWrite(green2, HIGH);
  delay(3000);
}