
// PWM is connected to pin 3.
const int pinPwm = 3;
// DIR is connected to pin 2.
const int pinDir = 2;
// Speed of the motor.
static int iSpeed = 0;

void setup() {
  Serial.begin(9600);           // set up Serial library at 9600 bps  
  pinMode(pinPwm, OUTPUT);
  pinMode(pinDir, OUTPUT);
}

void loop() {
  delay(4000);
  Serial.println("open");
  openValve();
  //digitalWrite(pinDir, LOW);
  Serial.println("stop");
 
  delay(3000);
  closeValve();
  Serial.println("close");
  
  //digitalWrite(pinDir, LOW);
  

  delay(3000);
}

void openValve(){
  analogWrite(pinPwm, 255); //set the speed
  digitalWrite(pinDir, LOW); //set the direction, LOW means open
  delay(50);
  analogWrite(pinPwm, 0); //stop it
}

void closeValve(){
  analogWrite(pinPwm, 255); //set the speed
  digitalWrite(pinDir, HIGH); //set the direction, HIGH means close
  delay(50);
  analogWrite(pinPwm, 0); //stop it
}
